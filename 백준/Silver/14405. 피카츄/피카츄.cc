#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;

	cin >> str;
	while (str.find("pi") != string::npos)
	{
		auto it1 = str.find("pi");
		if (it1 != string::npos)
			str.replace(it1, 2, ".");
	}

	while (str.find("ka") != string::npos)
	{
		auto it2 = str.find("ka");
		if (it2 != string::npos)
			str.replace(it2, 2, ".");
	}

	while (str.find("chu") != string::npos)
	{
		auto it3 = str.find("chu");
		if (it3 != string::npos)
			str.replace(it3, 3, ".");
	}

	bool bBreak = false;
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] != '.')
		{
			bBreak = true;
			break;
		}
	}
	if (bBreak)
		cout << "NO" << '\n';
	else
		cout << "YES" << '\n';

	return 0;
}
