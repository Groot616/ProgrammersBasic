#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <queue>

using namespace std;

vector<pair<int, int>> makeMap(vector<vector<int>>& map, const int& n)
{
    vector<pair<int, int>> retVec;
    map.resize(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int num;
            cin >> num;
            if (num == 1)
                retVec.emplace_back(i, j);
            map[i][j] = num;
        }
    }
    return retVec;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    vector<vector<int>> map;

    cin >> n;
    vector<pair<int, int>> edge = makeMap(map, n);

    unordered_map<int, vector<int>> adjLst;
    for (int i = 0; i < edge.size(); ++i)
        adjLst[edge[i].first].push_back(edge[i].second);

    vector<pair<int, unordered_set<int>>> result(n);
    for (int i = 0; i < edge.size(); ++i)
    {
        int start = edge[i].first;
        queue<int> q;
        unordered_set<int> visited;
        q.push(start);
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto neighbor : adjLst[node])
            {
                if (visited.find(neighbor) == visited.end())
                {
                    result[start].second.insert(neighbor);
                    q.push(neighbor);
                    visited.insert(neighbor);
                }
            }
        }
    }

    for (int i = 0; i < result.size(); ++i)
    {
        for (auto it = result[i].second.begin(); it != result[i].second.end(); ++it)
            map[i][*it] = 1;
    }
    for (const auto y : map)
    {
        for (const auto x : y)
            cout << x << " ";
        cout << '\n';
    }

    return 0;
}