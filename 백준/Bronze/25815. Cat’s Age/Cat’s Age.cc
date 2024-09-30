#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int year, month;
	int totalYear = 0;
	int totalMonth = 0;

	cin >> year >> month;
	if (year == 0)
	{
		totalMonth = month * 15;
	}
	else if (year == 1)
	{
		totalYear += 15;
		totalMonth = month * 9;
	}
	else if (year == 2)
	{
		totalYear += 24;
		totalMonth = month * 4;
	}
	else
	{
		totalYear += 24 + 4 * (year - 2);
		totalMonth = month * 4;
	}
	totalYear += totalMonth / 12;
	totalMonth %= 12;

	cout << totalYear << " " << totalMonth << '\n';

	return 0;
}