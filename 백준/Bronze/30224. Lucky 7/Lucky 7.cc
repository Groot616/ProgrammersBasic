#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	string nStr;
	int length;

	cin >> n;
	if (n < 10)
	{
		if (n == 7)
			cout << "3";
		else
			cout << "0";
	}
	else
	{
		nStr = to_string(n);
		if (nStr.find("7") != string::npos)
		{
			if (n % 7 == 0)
				cout << "3";
			else
				cout << "2";
		}
		else
		{
			if (n % 7 == 0)
				cout << "1";
			else
				cout << "0";
		}
	}

	return 0;
}