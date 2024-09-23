#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int x, y;
	vector<pair<int, int>> stationCoordi;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;
		stationCoordi.push_back(make_pair(x, y));
	}
	sort(stationCoordi.begin(), stationCoordi.end(), compare);
	cout << stationCoordi[0].first << " " << stationCoordi[0].second << '\n';

	return 0;
}