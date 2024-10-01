#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int hour, min, sec;

	cin >> hour >> min >> sec;
	if (sec + 1 >= 60)
	{
		sec = sec + 1 - 60;
		min += 1;
		if (min >= 60)
		{
			min = min - 60;
			hour += 1;
			if (hour >= 24)
				hour = hour - 24;
		}
	}
	else
		sec += 1;
	cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec << '\n';

	return 0;
}