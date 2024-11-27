#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <vector>

using namespace std;

void makeMap(unordered_map<int, vector<int>>& relation, const int& input)
{
    for (int i = 0; i < input; ++i) {
        int x, y;
        cin >> x >> y;
        relation[x].push_back(y);
        relation[y].push_back(x);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, p1, p2, input;
    cin >> n >> p1 >> p2 >> input;

    unordered_map<int, vector<int>> relation;
    makeMap(relation, input);

    queue<pair<int, int>> q;
    unordered_set<int> visited;

    q.push({ p1, 0 });
    visited.insert(p1);

    while (!q.empty())
    {
        int node = q.front().first;
        int distance = q.front().second;
        q.pop();

        if (node == p2)
        {
            cout << distance << '\n';
            return 0;
        }

        for (auto next : relation[node])
        {
            if (visited.find(next) == visited.end())
            {
                q.push({ next, distance + 1 });
                visited.insert(next);
            }
        }
    }

    cout << "-1\n";
    return 0;
}