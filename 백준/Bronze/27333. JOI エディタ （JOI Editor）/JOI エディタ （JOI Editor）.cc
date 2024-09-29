#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int length;
	string str;

	cin >> length;
	cin >> str;
	for (int i = 1; i < length; ++i)
	{
		if (str[i] == str[i - 1])
		{
			str[i - 1] -= 32;
			str[i] -= 32;
		}
	}
	cout << str << '\n';

	return 0;
}