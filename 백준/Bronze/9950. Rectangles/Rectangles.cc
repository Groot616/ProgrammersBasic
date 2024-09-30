#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (true)
	{
		int a, b, c;

		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;

		if (a == 0)
			cout << c / b << " " << b << " " << c << '\n';
		else if (b == 0)
			cout << a << " " << c / a << " " << c << '\n';
		else
			cout << a << " " << b << " " << a * b << '\n';
	}

	return 0;
}