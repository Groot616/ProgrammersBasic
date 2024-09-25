#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (true)
	{
		int n;
		vector<int> year;
		vector<pair<int, int>> diff;

		cin >> n;
		if (n == 0)
			break;

		year.resize(n);
		for (auto& x : year) cin >> x;
		for (int i = 0; i < year.size(); ++i)
			diff.push_back(make_pair(abs(2023 - year[i]), i + 1));
		sort(diff.begin(), diff.end(), compare);
		cout << diff[0].second << '\n';

		year.clear();
		diff.clear();
	}

	return 0;
}