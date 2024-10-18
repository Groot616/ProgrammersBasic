#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> day;
	int nowDay = 1;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		
		cin >> tmp;
		day.push_back(tmp);
		++nowDay;
	}
	sort(day.rbegin(), day.rend());
	for (int i = 0; i < n; ++i)
		day[i] -= (n - i);

	nowDay += *max_element(day.begin(), day.end()) + 1;
	cout << nowDay << '\n';

	return 0;
}