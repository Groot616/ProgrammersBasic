#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int price;
		int option;
		cin >> price;
		cin >> option;
		for (int j = 0; j < option; ++j)
		{
			int q, p;
			cin >> q >> p;
			price += q * p;
		}
		cout << price << '\n';
	}

	return 0;
}