#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;
	for (int k = 0; k < n; ++k)
	{
		for (int j = 0; j < 2; ++j)
		{
			for (int i = 0; i < n; ++i)
				cout << "@";
			for (int i = 0; i < 3 * n; ++i)
				cout << " ";
			for (int i = 0; i < n; ++i)
				cout << "@";
			cout << '\n';
		}
	}
	for (int k = 0; k < n; ++k)
	{
		for (int i = 0; i < n; ++i)
			cout << "@";
		for (int i = 0; i < n; ++i)
			cout << "@@@";
		for (int i = 0; i < n; ++i)
			cout << "@";
		cout << '\n';
	}
	for (int k = 0; k < n; ++k)
	{
		for (int i = 0; i < n; ++i)
			cout << "@";
		for (int i = 0; i < 3 * n; ++i)
			cout << " ";
		for (int i = 0; i < n; ++i)
			cout << "@";
		cout << '\n';
	}
	for(int k=0; k<n; ++k)
	{
		for (int i = 0; i < n; ++i)
			cout << "@";
		for (int i = 0; i < n; ++i)
			cout << "@@@";
		for (int i = 0; i < n; ++i)
			cout << "@";
		cout << '\n';
	}

	return 0;
}