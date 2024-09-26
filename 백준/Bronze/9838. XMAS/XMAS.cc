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
	vector<pair<int, int>> arr;

	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		int present;

		cin >> present;
		arr.push_back(make_pair(i + 1, present));
	}
	sort(arr.begin(), arr.end(), compare);
	for (const auto& e : arr)
		cout << e.first << '\n';

	return 0;
}