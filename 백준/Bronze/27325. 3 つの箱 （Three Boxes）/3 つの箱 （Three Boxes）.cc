#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int box = 1;
	int cnt = 0;
	string str;

	cin >> n;
	cin >> str;
	for (int i = 0; i < n; ++i)
	{
		if (str[i] == 'L' && box != 1)
			box -= 1;
		else if (str[i] == 'R' && box != 3)
			box += 1;

		if (box == 3)
			++cnt;
	}
	cout << cnt << '\n';

	return 0;
}