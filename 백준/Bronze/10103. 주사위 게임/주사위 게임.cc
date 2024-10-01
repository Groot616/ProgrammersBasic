#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int p1 = 100;
	int p2 = 100;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int dice1, dice2;
		cin >> dice1 >> dice2;
		if (dice1 > dice2) p2 -= dice1;
		else if (dice1 < dice2) p1 -= dice2;
		else continue;
	}
	cout << p1 << '\n' << p2 << '\n';

	return 0;
}