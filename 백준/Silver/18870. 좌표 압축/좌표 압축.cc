#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool compare(pair<long long, int>& a, pair<long long, int>& b)
{
	return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	vector<pair<long long, int>> xCoordi;
	vector<int> answer;
	unordered_map<long long, int> visited;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		long long x;

		cin >> x;
		xCoordi.emplace_back(x, i);
	}
	sort(xCoordi.begin(), xCoordi.end(), compare);

	int cnt = 0;
	answer.resize(n);
	answer[xCoordi[0].second] = cnt;
	visited[xCoordi[0].first] = cnt;

	for (int i = 1; i < xCoordi.size(); ++i)
	{
		auto it = visited.find(xCoordi[i].first);
		if (it != visited.end())
		{
			answer[xCoordi[i].second] = it->second;
			visited[xCoordi[i].first] = cnt;
		}
		else
		{
			++cnt;
			answer[xCoordi[i].second] = cnt;
			visited[xCoordi[i].first] = cnt;
		}
	}

	for (const auto e : answer)
		cout << e << " ";
	cout << '\n';

	return 0;
}