#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	int month;
	cin >> n >> m;

	int tmp = 14 - n;
	month = m + tmp;
	if (m + 7 > month)
		cout << (m + 7) - month << '\n';
	else
		cout << m + 7 << '\n';

	return 0;
}