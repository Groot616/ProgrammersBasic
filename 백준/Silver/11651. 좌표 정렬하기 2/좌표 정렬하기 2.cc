#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<pair<int, int>> coordi;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		coordi.push_back(make_pair(x, y));
	}

	sort(coordi.begin(), coordi.end(), compare);
	for (int i = 0; i < coordi.size(); ++i)
	{
		cout << coordi[i].first << " " << coordi[i].second << '\n';
	}

	return 0;
}