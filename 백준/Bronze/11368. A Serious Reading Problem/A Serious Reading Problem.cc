#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (true)
	{
		int c, w, l, p;

		cin >> c >> w >> l >> p;
		if (c == 0 && w == 0 && l == 0 && p == 0)
			break;
		
		cout << (int)pow(c, (w * l * p)) << '\n';
	}

	return 0;
}