#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	int x, n;

	cin >> x;
	cin >> n;
	while (x < n)
	{
		int r = x % 3;
		if (r == 0) x += 1;
		else if (r == 1) x *= 2;
		else x *= 3;

		answer += 1;
	}
	cout << answer << '\n';

	return 0;
}