#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	
	cin >> n;
	for (int j = 0; j < n; ++j)
	{
		for (int i = 0; i < n; ++i)
			cout << "@";
		for (int i = 0; i < n; ++i)
			cout << "@@@@";
		cout << '\n';
	}
	for (int k = 0; k < 4; ++k)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int i = 0; i < n; ++i)
				cout << "@";
			cout << '\n';
		}
	}

	return 0;
}