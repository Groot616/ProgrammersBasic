#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	return a.second > b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> results;
	int n, m;

	cin >> n >> m;
	results.resize(n);

	int maxComputer = 0;
	unordered_map<int, vector<int>> adjLst;
	for (int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		adjLst[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i)
	{
		queue<int> q;
		vector<bool> visited(n + 1, false);
		int cnt = 0;

		q.push(i);
		visited[i] = true;
		while (!q.empty())
		{
			int node = q.front();
			q.pop();
			for (auto neighbor : adjLst[node])
			{
				if (!visited[neighbor])
				{
					q.push(neighbor);
					visited[neighbor] = true;
					++cnt;
				}
			}
		}
		
		results[i - 1] = cnt;
		if (cnt > maxComputer)
			maxComputer = cnt;
	}

	for (int i = 0; i < results.size(); ++i)
	{
		if (results[i] == maxComputer)
			cout << i + 1 << " ";
	}

	return 0;
}