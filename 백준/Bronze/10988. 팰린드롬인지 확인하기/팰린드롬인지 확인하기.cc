#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	bool check = true;
	
	cin >> str;
	if (str.length() % 2 == 1)
	{
		for (int i = 0; i < str.length() / 2; ++i)
		{
			if (str[i] != str[str.length() - 1 - i])
			{
				check = false;
				break;
			}
		}
	}
	else
	{
		for (int i = 0; i < str.length() / 2; ++i)
		{
			if (str[i] != str[str.length() - 1 - i])
			{
				check = false;
				break;
			}
		}
	}

	if (check)
		cout << "1" << '\n';
	else
		cout << "0" << '\n';

	return 0;
}