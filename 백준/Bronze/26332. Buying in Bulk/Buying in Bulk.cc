#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int test;
	int cnt, price;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		cin >> cnt >> price;
		if (cnt >= 2)
		{
			cout << cnt << " " << price << '\n';
			cout << cnt * price - 2 * (cnt - 1) << '\n';
		}
		else
		{
			cout << cnt << " " << price << '\n';
			cout << cnt * price << '\n';
		}
	}
	

	return 0;
}