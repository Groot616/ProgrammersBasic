#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(pair<string, int>& a, pair<string, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second > b.second;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, k, a, b, c;
	vector<pair<string, int>> army;

	cin >> n >> m >> k >> a >> b >> c;
	army.push_back(make_pair("Joffrey", n * a));
	army.push_back(make_pair("Robb", m * b));
	army.push_back(make_pair("Stannis", k * c));
	sort(army.begin(), army.end(), compare);

	cout << army[0].first;
	for (int i = 1; i < 3; ++i)
	{
		if (army[i].second == army[0].second)
			cout << " " << army[i].first;
	}
	cout << '\n';

	return 0;
}