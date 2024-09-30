#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < 2 * n - 1; ++i)
	{
		if (i < n)
		{
			for (int j = i + 1; j < n; ++j)
				cout << " ";
			for (int j = 0; j < i + 1; ++j)
				cout << "*";
			cout << '\n';
		}
		else
		{
			for (int j = i - n + 1; j > 0; --j)
				cout << " ";
			for (int j = 2 * n - 1 - i; j > 0; --j)
				cout << "*";
			cout << '\n';
		}
	}
	
	return 0;
}