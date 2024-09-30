#include <iostream>

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
		int hour, min;

		cin >> hour >> min;
		if (min < 45)
		{
			if (hour == 0)
				hour += 24;
			hour -= 1;
			min += 15;
		}
		else
			min -= 45;
		cout << "Case #" << i + 1 << ": " << hour << " " << min << '\n';
	}

	return 0;
}