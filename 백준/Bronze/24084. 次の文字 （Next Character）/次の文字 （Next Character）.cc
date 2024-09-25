#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int length;
	string str;

	cin >> length;
	cin >> str;
	for (int i = 1; i < length; ++i)
	{
		if (str[i] == 'J')
			cout << str[i - 1] << '\n';
	}

	return 0;
}