#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	if (a.first == b.first)
		return a.second < b.second;
	else return a.first < b.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	vector<int> sumOfTime;
	int n;
	vector<pair<int, int>> atm;

	cin >> n;
	for (int idx = 0; idx < n; ++idx)
	{
		int time;
		cin >> time;
		atm.push_back(make_pair(time, idx));
	}
	
	sort(atm.begin(), atm.end(), compare);
	for (int idx = 0; idx < n; ++idx)
	{
		int sum = 0;
		for (int j = 0; j <= idx; ++j)
		{
			sum += atm[j].first;
		}
		sumOfTime.push_back(sum);
	}
	for (const auto& e : sumOfTime)
		answer += e;
	cout << answer << '\n';

	return 0;
}