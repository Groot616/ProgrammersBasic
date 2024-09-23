#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == 'a')
			cout << '4';
		else if (str[i] == 'e')
			cout << '3';
		else if (str[i] == 'i')
			cout << '1';
		else if (str[i] == 'o')
			cout << '0';
		else if (str[i] == 's')
			cout << '5';
		else
			cout << str[i];
	}

	return 0;
}