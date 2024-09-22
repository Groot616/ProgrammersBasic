#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int ns = 0;
	int ew = 0;
	int length;
	string str;

	cin >> length;
	cin >> str;
	for (int i = 0; i < length; ++i)
	{
		if (str[i] == 'N')
			ns += 1;
		else if (str[i] == 'S')
			ns -= 1;
		else if (str[i] == 'E')
			ew += 1;
		else
			ew -= 1;
	}
	answer = abs(ns) + abs(ew);
	cout << answer << '\n';

	return 0;
}