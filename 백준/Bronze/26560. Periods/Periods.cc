#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		string str;
		getline(cin, str);
		if (str[str.length() - 1] != '.')
			str += ".";
		cout << str << '\n';
	}

	return 0;
}