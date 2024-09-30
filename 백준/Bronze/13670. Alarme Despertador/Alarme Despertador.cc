#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int h1, m1, h2, m2;

	while (true)
	{
		cin >> h1 >> m1 >> h2 >> m2;
		if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
			break;

		int total1 = 60 * h1 + m1;
		int total2 = 60 * h2 + m2;
		if (total2 >= total1)
			cout << total2 - total1 << '\n';
		else
			cout << 1440 + total2 - total1 << '\n';
	}

	return 0;
}