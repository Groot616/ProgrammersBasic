#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cout << fixed;
	cout.precision(2);

	double money;

	cin >> money;
	if (0.01 * money + 25 < 100)
		cout << "100.00" << '\n';
	else if (0.01 * money + 25 > 2000)
		cout << "2000.00" << '\n';
	else
		cout << 0.01 * money + 25 << '\n';

	return 0;
}