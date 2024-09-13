#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	getline(cin, str);

	string tmp = "";
	tmp += str[0];
	for (int i = 1; i < str.length(); ++i)
	{
		if (str[i] != str[i - 1])
		{
			tmp += str[i];
		}
	}
	cout << tmp << "\n";

	return 0;
}