#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	string str;
	string tmp = "";

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;
		for (int j = 0; j < str.length(); ++j)
		{
			if (str[0] >= 'A' && str[0] <= 'Z')
				str[0] = tolower(str[0]);

			if (str[j] >= 'a' && str[j] <= 'z')
				tmp += str[j];

			if (str[j] >= 'A' && str[j] <= 'Z')
			{
				cout << tmp;
				tmp = "";
				str[j] = tolower(str[j]);
				tmp += '_';
				tmp += str[j];
			}
			if (j == str.length() - 1)
			{
				cout << tmp;
				tmp = "";
			}
		}
		cout << '\n';
	}

	return 0;
}