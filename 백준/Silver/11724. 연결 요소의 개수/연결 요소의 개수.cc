#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <algorithm>

using namespace std;

void bfs(unordered_map<int, vector<int>> adjLst, int vertex, int &answer)
{
	queue<int> q;
	unordered_set<int> visited;
	vector<int> result;

	for (int i = 1; i <= vertex; ++i)
	{
		int start = i;
		if (visited.find(start) == visited.end())
		{
			q.push(start);
			visited.insert(start);
			result.push_back(start);
			while (!q.empty())
			{
				int node = q.front();
				q.pop();
				for (int neighbors : adjLst[node])
				{
					if (visited.find(neighbors) == visited.end())
					{
						q.push(neighbors);
						visited.insert(neighbors);
						result.push_back(neighbors);
					}
				}
			}
			++answer;
		}
	}
}

void makePair(unordered_map<int, vector<int>> &adjLst, const int vertex, const int edge)
{
	for (int i = 0; i < edge; ++i)
	{
		int u, v;
		cin >> u >> v;
		adjLst[u].push_back(v);
		adjLst[v].push_back(u);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int answer = 0;
	int vertex, edge;
	unordered_map<int, vector<int>> adjLst;

	cin >> vertex >> edge;
	makePair(adjLst, vertex, edge);

	bfs(adjLst, vertex, answer);
	cout << answer << '\n';

	return 0;
}