#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string answer = "";
	string str;
	int mag;

	cin >> mag;
	cin >> str;
	int odd = 0;
	int even = 0;
	for (int i = 0; i < mag; ++i)
	{
		if (str[0 + 2 * i] == '1')
		{
			even++;
		}
		else
			odd++;
	}
	if (even != mag && odd != mag)
		answer = "No";
	else
		answer = "Yes";
	cout << answer << '\n';

	return 0;
}