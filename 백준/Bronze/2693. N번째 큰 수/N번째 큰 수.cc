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

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		vector<int> arr(10);

		for (auto& x : arr) cin >> x;
		sort(arr.rbegin(), arr.rend());
		cout << arr[2] << '\n';
		arr.clear();
	}

	return 0;
}