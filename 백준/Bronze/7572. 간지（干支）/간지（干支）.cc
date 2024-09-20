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

	string answer = "";
	int myYear;
	int origin;

	cin >> myYear;
	origin = getOrigin();
	origin = origin % 60;
	if (myYear < origin)
	{
		if (myYear == 1) answer = "J7";
		else if (myYear == 2) answer = "K8";
		else answer = "L9";
	}
	else if (myYear == origin)
	{
		answer = "A0";
	}
	else
	{
		myYear = (myYear - 4) % 60;
		int ImyYear = myYear % 10;
		char CmyYear = myYear % 12;
		answer += ship_e_g[CmyYear];
		answer += ship_gan[ImyYear] + '0';
	}
	cout << answer << '\n';

	return 0;
}