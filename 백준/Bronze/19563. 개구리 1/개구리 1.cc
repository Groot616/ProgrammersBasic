#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long a, b, c;

	cin >> a >> b >> c;
	if ((c - (abs(a) + abs(b))) % 2 == 0 && c >= abs(a) + abs(b))
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';

	return 0;
}