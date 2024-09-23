#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	return a.first > b.first;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, lateTime;
	vector<pair<int, int>> table;

	cin >> n >> lateTime;
	for (int i = 0; i<n; ++i)
	{
		int arriveBus, arriveCampus;
		cin >> arriveBus >> arriveCampus;
		if(arriveBus + arriveCampus <= lateTime)
			table.push_back(make_pair(arriveBus, arriveCampus));
	}
	if (table.size() == 0)
	{
		cout << "-1" << '\n';
		return 0;
	}
	sort(table.begin(), table.end(), compare);
	cout << table[0].first << '\n';

	return 0;
}