#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt = 0;
	int myCoffee = 0;
	int length;
	string str;

	cin >> length;
	cin >> str;
	for (int i = 0; i < length; ++i)
	{
		if (str[i] == '1')
		{
			cnt += 1;
			myCoffee = 2;
		}
		if (str[i] == '0' && myCoffee != 0)
		{
			cnt += 1;
			myCoffee -= 1;
		}
	}
	cout << cnt << '\n';

	return 0;
}