#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int sum = 0;
	string str;

	getline(cin, str);
	for (int i = 0; i < str.length() - 1; ++i)
	{
		if (str[i] >= '0' && str[i] <= '9')
			sum += (str[i] - '0');
	}
	if (sum == str[str.length() - 1] - '0')
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';

	return 0;
}