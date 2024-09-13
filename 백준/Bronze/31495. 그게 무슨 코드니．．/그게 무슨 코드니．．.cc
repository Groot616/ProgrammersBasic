#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int length;

	getline(cin, str);
	length = str.length();

	if (length == 1)
	{
		cout << "CE" << "\n";
		return 0;
	}
	else if (length == 2 && str[0] == '\"' && str[1] == '\"')
	{
		cout << "CE" << "\n";
		return 0;
	}

	if (str[0] != '\"' || str[length - 1] != '\"')
		cout << "CE" << endl;
	else
	{
		for (int i = 1; i < length - 1; ++i)
			cout << str[i];
	}
	cout << "\n";

	return 0;
}