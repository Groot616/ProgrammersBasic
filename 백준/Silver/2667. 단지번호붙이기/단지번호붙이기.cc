#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

const vector<int> dx = { 0, 0, 1, -1 };
const vector<int> dy = { 1, -1, 0, 0 };

struct Coordi
{
    int y, x;

    Coordi(int y, int x) : y(y), x(x) {}

    bool bIsValid(const int& n) const
    {
        return x >= 0 && x < n && y >= 0 && y < n;
    }
};

void makeMap(vector<vector<int>>& map, const int& n)
{
    map.resize(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        string info;
        cin >> info;
        for (int j = 0; j < info.length(); ++j)
            map[i][j] = info[j] - '0';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int answer1 = 0;
    vector<int> answer2;
    int n;
    vector<vector<int>> map;

    cin >> n;
    makeMap(map, n);

    vector<vector<bool>> visited(n, vector<bool>(n, false));
    queue<Coordi> q;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (!visited[i][j] && map[i][j] == 1)
            {
                int sum = 1;
                q.push({ i, j });
                while (!q.empty())
                {
                    Coordi current = q.front();
                    visited[current.y][current.x] = true;
                    q.pop();
                    for (int k = 0; k < 4; ++k)
                    {
                        Coordi next = { current.y + dy[k], current.x + dx[k] };
                        if (next.bIsValid(n) && map[next.y][next.x] != 0 && !visited[next.y][next.x])
                        {
                            q.push({ next.y, next.x });
                            visited[next.y][next.x] = true;
                            ++sum;
                        }
                    }
                }
                ++answer1;
                answer2.push_back(sum);
            }
        }
    }
    cout << answer1 << '\n';
    sort(answer2.begin(), answer2.end());
    for (auto cnt : answer2)
        cout << cnt << '\n';

    return 0;
}