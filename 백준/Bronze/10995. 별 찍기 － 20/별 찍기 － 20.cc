#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (n < 2)
			{
				if (i % 2 == 0)
					cout << "*";
			}
			else
			{
				if (i % 2 == 0)
				{
					if (j == 0)
						cout << "*";
					else
						cout << " *";
				}
				else
				{
					if (j == 0)
						cout << " *";
					else
						cout << " *";
				}
			}
		}
		cout << '\n';
	}

	return 0;
}