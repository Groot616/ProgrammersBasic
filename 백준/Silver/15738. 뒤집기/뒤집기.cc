#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k, m;
	vector<pair<int, int>> arrIdx;

	cin >> n >> k >> m;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		arrIdx.emplace_back(num, i + 1);
	}
	for (int i = 0; i < m; ++i)
	{
		int num;
		cin >> num;

		if (num > 0)
		{
			if (k <= num)
				k = num - k + 1;
		}
		else
		{
			int size = -num;
			if (k > n - size)
				k = n - (k - (n - size)) + 1;
		}
	}
	cout << k << '\n';

	return 0;
}