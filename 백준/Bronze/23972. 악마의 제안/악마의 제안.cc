#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long k, n;

	// n*(x - k) >= x, nx - nk >= x, -nk >= x - nx, -nk > = x(1 - n), nk/(n-1) <= x
	cin >> k >> n;
	if (n == 1)
		cout << "-1" << '\n';
	else
		cout << (n * k + (n - 2)) / (n - 1) << '\n';

	return 0;
}