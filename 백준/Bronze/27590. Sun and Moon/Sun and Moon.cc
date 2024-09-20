#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> ship_gan = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
vector<char> ship_e_g = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L' };

int getOrigin()
{
	int origin;
	int IYear = 2013;
	int IYear2013 = 9;
	char CYear2013 = 'F';
	int j = 9;
	int k = 5;
	while (true)
	{
		IYear -= 1;
		if (j != 0)
		{
			IYear2013 = ship_gan[j - 1];
			--j;
		}
		else j = 9;
		if (k != 0)
		{
			CYear2013 = ship_e_g[k - 1];
			--k;
		}
		else
			k = 11;

		if (IYear2013 == 0 && CYear2013 == 'A')
			break;
	}
	origin = IYear;
	return origin;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int sunPos, sunReturnTime;
	int moonPos, moonReturnTime;

	cin >> sunPos >> sunReturnTime;
	cin >> moonPos >> moonReturnTime;
	while (true)
	{
		if (sunPos != sunReturnTime)
		{
			++sunPos;
			if (sunPos == sunReturnTime)
				sunPos = 0;
			answer += 1;
		}
		else sunPos = 0;

		if (moonPos != moonReturnTime)
		{
			++moonPos;
			if (moonPos == moonReturnTime)
				moonPos = 0;
		}
		else
			moonPos = 0;

		if (sunPos == 0 && moonPos == 0)
			break;
	}
	cout << answer << '\n';

	return 0;
}