#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <queue>
#include <unordered_map>

using namespace std;

unordered_map<int, vector<int>> adjLst;
unordered_set<int> visited;
vector<int> result;

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited.insert(start);
    result.push_back(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto neighbor : adjLst[node])
        {
            if (visited.find(neighbor) == visited.end())
            {
                q.push(neighbor);
                visited.insert(neighbor);
                result.push_back(neighbor);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int computer, link;
    cin >> computer;
    cin >> link;
    for (int i = 0; i < link; ++i)
    {
        int u, v;
        cin >> u >> v;
        adjLst[u].push_back(v);
        adjLst[v].push_back(u);
    }

    bfs(1);
    cout << result.size() - 1 << '\n';

    return 0;
}