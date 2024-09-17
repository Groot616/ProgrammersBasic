#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;

	int x, y;

	cin >> x >> y;
	if ((y % (x * 2)) / x == 0)
		answer = x + y;
	else
		answer = y - x;
	if (answer > x * 2)
		answer %= (x * 2);
	cout << answer << '\n';

	return 0;
}