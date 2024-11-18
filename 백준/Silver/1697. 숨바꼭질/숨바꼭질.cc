#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	vector<int> xCoordi;

	cin >> n >> k;
	xCoordi.resize(k + 2, 9999999999);
	
	if (n >= k)
	{
		cout << n - k << '\n';
		return 0;
	}

	unordered_map<int, vector<int>> adjLst;
	for (int i = 0; i < k + 2; ++i)
	{
		if (i - 1 >= 0)
			adjLst[i].push_back(i - 1);
		if (i + 1 < k + 2)
			adjLst[i].push_back(i + 1);
		if (2 * i < k + 2 && i != 0)
			adjLst[i].push_back(2 * i);
	}

	unordered_set<int> visited;
	queue<int> q;

	q.push(n);
	visited.insert(n);

	xCoordi[n] = 0;
	while (!q.empty())
	{
		int levelSize = q.size();
		for (int i = 0; i < levelSize; ++i)
		{
			int node = q.front();
			q.pop();
			for (auto neighbor : adjLst[node])
			{
				if (neighbor < 0 || neighbor >= k + 2)
					continue;

				if (visited.find(neighbor) == visited.end())
				{
					q.push(neighbor);
					visited.insert(neighbor);
					xCoordi[neighbor] = xCoordi[node] + 1;
				}
			}
		}
	}
	cout << xCoordi[k] << '\n';

	return 0;
}