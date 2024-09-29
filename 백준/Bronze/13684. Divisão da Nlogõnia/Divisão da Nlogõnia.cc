#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true)
	{
		int n;
		
		cin >> n;
		if (n == 0)
			break;

		int coordiX, coordiY;
		cin >> coordiX >> coordiY;
		for (int i = 0; i < n; ++i)
		{
			int x, y;
			cin >> x >> y;
			if (coordiX == x || coordiY == y)
				cout << "divisa" << '\n';
			else
			{
				if (x > coordiX && y > coordiY) cout << "NE" << '\n';
				else if (x < coordiX && y > coordiY) cout << "NO" << '\n';
				else if (x < coordiX && y < coordiY) cout << "SO" << '\n';
				else if (x > coordiX && y < coordiY) cout << "SE" << '\n';
			}
		}
	}

	return 0;
}