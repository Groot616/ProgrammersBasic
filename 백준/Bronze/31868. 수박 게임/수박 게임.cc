#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long n, k;
	int cnt = 0;

	cin >> n >> k;
	if (k % 2 == 1)
		k -= 1;
	for (int i = 1; i < n; ++i)
	{
		if (k / 2 != 0)
		{
			k /= 2;
			++cnt;
			if (k % 2 == 1 && i != n - 1)
				k -= 1;
		}
	}
	if (cnt != n - 1)
		cout << "0" << '\n';
	else
		cout << k << '\n';

	return 0;
}