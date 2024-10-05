#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int cookie, c;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int day = 0;
		cin >> cookie >> c;
		while (true)
		{
			if (cookie - c > 0)
			{
				day += 1;
				cookie -= c;
			}
			else
			{
				day += 1;
				break;
			}
		}
		cout << day << '\n';
	}

	return 0;
}