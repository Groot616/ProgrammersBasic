#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int totalHour = 0;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int hour;
		cin >> hour;
		if (i != n - 1)
			totalHour += hour + 8;
		else
			totalHour += hour;
	}
	cout << totalHour / 24 << " " << totalHour % 24 << '\n';

	return 0;
}