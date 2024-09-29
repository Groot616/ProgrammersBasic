#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	int money;
	int sum = 0;
	vector<int> arr;

	cin >> money;
	arr.resize(9);
	for (auto& x : arr) cin >> x;
	sum = accumulate(arr.begin(), arr.end(), 0);
	answer = money - sum;
	cout << answer << '\n';

	return 0;
}