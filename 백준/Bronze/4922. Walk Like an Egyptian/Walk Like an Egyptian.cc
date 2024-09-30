#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (true)
	{
		int n;
		int cnt = 1;
		int add = 0;
		cin >> n;
		if (n == 0)
			break;

		for (int i = 0; i < n - 1; ++i)
		{
			add += 2;
			cnt += add;
		}
		cout << n << " => " << cnt << '\n';
	}

	return 0;
}