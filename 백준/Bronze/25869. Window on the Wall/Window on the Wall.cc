#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int w, h, d;

	cin >> w >> h >> d;
	if (w - 2 * d < 0 || h - 2 * d < 0)
		cout << "0" << '\n';
	else
		cout << (w - 2 * d) * (h - 2 * d) << '\n';

	return 0;
}