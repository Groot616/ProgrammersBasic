#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (true)
	{
		int n;
		int speed;
		int hour = 0;
		int total = 0;
		
		cin >> n;
		if (n == -1)
			break;

		for (int i = 0; i < n; ++i)
		{

			int passedHour;
			cin >> speed >> passedHour;
			total += (passedHour - hour) * speed;
			hour = passedHour;
		}
		cout << total  << " miles" << '\n';
		total = 0;
	}

	return 0;
}