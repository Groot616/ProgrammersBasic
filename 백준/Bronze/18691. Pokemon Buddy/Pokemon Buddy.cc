#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int test;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int group;
		int nowCandy, needCandy;

		cin >> group >> nowCandy >> needCandy;
		if (group == 1)
		{
			if (nowCandy >= needCandy)
				cout << '0' << '\n';
			else
				cout << needCandy - nowCandy << '\n';
		}
		else if (group == 2)
		{
			if (nowCandy >= needCandy)
				cout << '0' << '\n';
			else
				cout << 3 * (needCandy - nowCandy) << '\n';
		}
		else
		{
			if (nowCandy >= needCandy)
				cout << '0' << '\n';
			else
				cout << 5 * (needCandy - nowCandy) << '\n';
		}
	}

	return 0;
}