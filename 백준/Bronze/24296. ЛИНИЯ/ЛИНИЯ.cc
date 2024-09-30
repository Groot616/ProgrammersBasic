#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;

	if (n % 2 == 0)
	{
		cout << n << '\n';
		return 0;
	}

	while (true)
	{
		n = n - (n - 1) / 2;
		if (n % 2 == 0)
			break;
	}
	cout << n;

	return 0;
}