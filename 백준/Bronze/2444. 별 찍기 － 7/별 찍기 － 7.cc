#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;
	for (int i = 0; i < 2 * n - 1; ++i)
	{
		// 0 1 2 3 4
		if (i < n)
		{
			for (int j = 0; j < n - i - 1; ++j)
				cout << " ";
			for (int j = 0; j < 2 * i + 1; ++j)
				cout << "*";
			cout << '\n';
		}
		else
		{
			for (int j = 0; j < i - n + 1; ++j)
				cout << " ";
			for (int j = 0; j < 4 * (n - 1) + 1 - 2 * i; ++j)
				cout << "*";
			cout << '\n';
		}
	}

	return 0;
}