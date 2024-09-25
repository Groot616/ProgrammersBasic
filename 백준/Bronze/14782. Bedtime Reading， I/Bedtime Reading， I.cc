#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<int> arr;

	cin >> n;
	for (int i = 1; i <= n / 2; ++i)
	{
		if (n % i == 0)
			arr.push_back(i);
	}
	arr.push_back(n);
	cout << accumulate(arr.begin(), arr.end(), 0) << '\n';

	return 0;
}