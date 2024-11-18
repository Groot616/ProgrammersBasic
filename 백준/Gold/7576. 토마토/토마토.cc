#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const vector<int> dx = { 0, 0, 1, -1 };
const vector<int> dy = { 1, -1, 0, 0 };

struct Coordi
{
    int y, x;

    Coordi(int y, int x) : y(y), x(x) {}

    bool bIsValid(int width, int height) const
    {
        return x >= 0 && x < width && y >= 0 && y < height;
    }
};

vector<pair<int, int>> makeFarm(vector<vector<int>>& farm, int y, int x)
{
    vector<pair<int, int>> retVec;
    farm.resize(y, vector<int>(x));
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            int info;
            cin >> info;
            if (info == 1)
                retVec.emplace_back(i, j);
            farm[i][j] = info;
        }
    }
    return retVec;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int answer = 0;
    int x, y;
    vector<vector<int>> farm;
    vector<pair<int, int>> tomatoPos;

    cin >> x >> y;
    tomatoPos = makeFarm(farm, y, x);

    vector<vector<bool>> visited(y, vector<bool>(x));
    queue<Coordi> q;

    for (auto pos : tomatoPos)
    {
        q.push({ pos.first, pos.second });
        visited[pos.first][pos.second] = true;
    }
    while (!q.empty())
    {
        int qSize = q.size();
        for (int i = 0; i < qSize; ++i)
        {
            Coordi current = q.front();
            q.pop();
            for (int j = 0; j < 4; ++j)
            {
                Coordi next = { current.y + dy[j], current.x + dx[j] };
                if (next.bIsValid(x, y) && !visited[next.y][next.x] && farm[next.y][next.x] != -1)
                {
                    q.push({ next.y, next.x });
                    visited[next.y][next.x] = true;
                    farm[next.y][next.x] = 1;
                }
            }
        }
        ++answer;
    }
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            if (visited[i][j] == false && farm[i][j] == 0)
            {
                answer = -1;
                cout << answer << '\n';
                return 0;
            }
        }
    }
    cout << answer - 1 << '\n';

    return 0;
}