#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	string str;

	cin >> str;
	if (str[0] == '0' && str[1] != 'x')
	{
		for (int i = str.length() - 1; i >= 0; --i)
		{
			answer += (str[i] - '0') * (int)pow(8, str.length() - i - 1);
		}
	}
	else if (str[0] == '0' && str[1] == 'x')
	{
		for (int i = str.length() - 1; i >= 2; --i)
		{
			if (str[i] >= '0' && str[i] <= '9')
				answer += (str[i] - '0') * (int)pow(16, str.length() - i - 1);
			else
				answer += (str[i] - 87) * (int)pow(16, str.length() - i - 1);
		}
	}
	else
		answer = stoi(str);
	cout << answer << '\n';

	return 0;
}