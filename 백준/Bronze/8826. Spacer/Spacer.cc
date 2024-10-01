#include <iostream>
#include <string>
#include <cmath>

const double PI = 3.1415926535;

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int t;
		int x = 0;
		int y = 0;
		string str;

		cin >> t;
		cin >> str;
		for (int j = 0; j < str.length(); ++j)
		{
			if (str[j] == 'E')
				x += 1;
			else if (str[j] == 'W')
				x -= 1;
			else if (str[j] == 'N')
				y += 1;
			else if (str[j] == 'S')
				y -= 1;
		}
		cout << abs(x) + abs(y) << '\n';
	}

	return 0;
}