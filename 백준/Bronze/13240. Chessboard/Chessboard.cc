#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
					cout << "*";
				else
					cout << ".";
			}
			else
			{
				if (j % 2 == 0)
					cout << ".";
				else
					cout << "*";
			}
		}
		cout << '\n';
	}

	return 0;
}