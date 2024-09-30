#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;

	cin >> str;
	for (int i = 1; i < str.length(); ++i)
	{
		if (str[i] == str[i - 1] && str[i] == 's')
		{
			cout << "hiss" << '\n';
			return 0;
		}
	}
	cout << "no hiss" << '\n';

	return 0;
}