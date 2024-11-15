#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const vector<int> dx = { 0, 0, 1, -1 };
const vector<int> dy = { 1, -1, 0, 0 };

struct Coordi
{
    int y, x;

    Coordi(int y, int x) : y(y), x(x) {}

    bool bIsValid(const int &width, const int &height) const
    {
        return x >= 0 && x < width && y >= 0 && y < height;
    }

    Coordi move(int i) const
    {
        return Coordi(y + dy[i], x + dx[i]);
    }
};

pair<int, int> makeMap(vector<vector<char>>& map, const int& x, const int& y)
{
    pair<int, int> retPair;
    map.resize(y, vector<char>(x));
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            char info;
            cin >> info;
            if (info == 'I')
                retPair = { i, j };
            map[i][j] = info;
        }
    }
    return retPair;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int answer = 0;
    int x, y;
    vector<vector<char>> map;

    cin >> y >> x;
    pair<int, int> myCoordi = makeMap(map, x, y);
    vector<vector<bool>> visited(y, vector<bool>(x, false));
    queue<Coordi> q;

    q.push({ myCoordi.first, myCoordi.second });
    visited[myCoordi.first][myCoordi.second] = true;
    while (!q.empty())
    {
        Coordi current = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            Coordi next = current.move(i);
            if (next.bIsValid(x, y) && !visited[next.y][next.x] && map[next.y][next.x] == 'O')
            {
                q.push({ next.y, next.x });
                visited[next.y][next.x] = true;
            }
            else if (next.bIsValid(x, y) && !visited[next.y][next.x] && map[next.y][next.x] == 'P')
            {
                ++answer;
                q.push({ next.y, next.x });
                visited[next.y][next.x] = true;
            }
        }
    }
    if (answer == 0)
        cout << "TT" << '\n';
    else
        cout << answer << '\n';

    return 0;
}