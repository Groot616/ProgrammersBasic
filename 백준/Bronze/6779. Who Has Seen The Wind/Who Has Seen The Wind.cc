#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int h;
	int t;
	int touchTime;
	bool bIsTouch = false;

	cin >> h;
	cin >> t;
	for(int i = 0; i <= t; ++i)
	{
		int a = -6 * (int)pow(i, 4) + h * (int)pow(i, 3) + 2 * (int)pow(i, 2) + i;
		if (a < 0)
		{
			bIsTouch = true;
			touchTime = i;
			break;
		}
	}
	if (bIsTouch)
		cout << "The balloon first touches ground at hour: " << touchTime << '\n';
	else
		cout << "The balloon does not touch ground in the given time." << '\n';
	
	return 0;
}