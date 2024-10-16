#include <iostream>
#include <vector>
#include <string>

using namespace std;

string origin(string str)
{
	if (str.length() % 2 == 1)
		return str;

	string changeStr = "";
	for (int i = 0; i < str.length(); i += 2)
	{
		for (int j = 0; j < str[i] - '0'; j++)
			changeStr += str[i + 1];
	}
	if (changeStr == str)
		return changeStr;
	
	return origin(changeStr);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int idx = 1;
	string str;
	while (true)
	{
		cin >> str;
		if (str == "0")
			break;

		cout << "Test " << idx << ": " << origin(str) << '\n';
		++idx;
	}
	return 0;
}