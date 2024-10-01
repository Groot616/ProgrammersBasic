#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<int> arr;

	cin >> n;
	arr.resize(n);
	for (auto& x : arr) cin >> x;
	sort(arr.rbegin(), arr.rend());
	cout << arr[0] << '\n';

	return 0;
}