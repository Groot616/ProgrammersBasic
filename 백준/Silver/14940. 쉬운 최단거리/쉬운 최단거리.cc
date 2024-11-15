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

    bool bIsValid(const int& width, const int& height) const
    {
        return x >= 0 && x < width && y >= 0 && y < height;
    }


};

pair<int, int> makeMap(vector<vector<int>>& map, const int& x, const int& y)
{
    pair<int, int> retPair;
    map.resize(y, vector<int>(x));
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            int n;
            cin >> n;
            if (n == 2)
                retPair = { i, j };
            map[i][j] = n;
        }
    }
    return retPair;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int y, x;
    vector<vector<int>> map;

    cin >> y >> x;
    pair<int, int> myCoordi = makeMap(map, x, y);
    vector<vector<bool>> visited(y, vector<bool>(x, false));
    queue<Coordi> q;

    q.push({ myCoordi.first, myCoordi.second });
    map[myCoordi.first][myCoordi.second] = 0;
    visited[myCoordi.first][myCoordi.second] = true;
    while (!q.empty())
    {
        Coordi current = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            Coordi next = { current.y + dy[i], current.x + dx[i] };
            if (next.bIsValid(x, y) && !visited[next.y][next.x] && map[next.y][next.x] == 1)
            {
                map[next.y][next.x] = map[current.y][current.x] + 1;
                q.push({ next.y, next.x });
                visited[next.y][next.x] = true;
            }
        }
    }
    for (int i = 0; i < visited.size(); ++i)
    {
        for (int j = 0; j < visited[i].size(); ++j)
        {
            if (!visited[i][j] && map[i][j] == 1)
                map[i][j] = -1;
        }
    }
    for (int i = 0; i < map.size(); ++i)
    {
        for (int j = 0; j < map[i].size(); ++j)
            cout << map[i][j] << " ";
        cout << '\n';
    }

    return 0;
}