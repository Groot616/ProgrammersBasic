#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 경계 셀만 칠했을 경우 칠한 셀의 개수는?
	long long answer = 0;
	long long row, col;
	long long nonColor = 0;

	cin >> row;
	cin >> col;

	if (row <= 3 || col <= 3)
	{
		if (min(row, col) == 2 || min(row, col) == 1)
		{
			answer = row * col;
			cout << answer << '\n';
			return 0;
		}
	}

	nonColor = row * col - 2 * col - 2 * (row - 2);
	answer = row * col - nonColor;
	cout << answer << '\n';

	return 0;
}