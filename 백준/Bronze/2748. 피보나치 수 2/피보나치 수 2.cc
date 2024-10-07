#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<unsigned long long> arr = { 0, 1 };

	cin >> n;
	for (int i = 2; i <= n; ++i)
		arr.push_back(arr[i - 2] + arr[i - 1]);
	cout << arr[arr.size() - 1] << '\n';

	return 0;
}