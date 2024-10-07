#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void makeZero(int length, string& str)
{
	//string addZero = "";

	//for (int i = 0; i < length - 1; ++i)
		//addZero += "0";
	str.replace(length, 1, "0");
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	
	cin >> str;
	if (str.length() == 1)
	{
		cout << str << '\n';
		return 0;
	}
	else
	{
		// 4966
		int length = str.length();
		for (int i = 1; i < length; ++i)
		{
			if (str[length - i] - '0' < 5)
				makeZero(length - i, str);
			else
			{
				makeZero(length - i, str);
				if (str[length - i - 1] != '9')
					str[length - i - 1] = (str[length - i - 1] - '0' + 1) + '0';
				else
				{
					str = to_string(stoi(str) + (int)pow(10, i));
				}
			}
		}
	}
	cout << str << '\n';

	return 0;
}