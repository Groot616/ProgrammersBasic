#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	string str1 = "";
	string str2 = "";

	cin >> str;
	str1 = str.substr(0, str.length() / 2);
	str2 = str.substr(str.length() / 2, str.length() - 1);
	cout << str1 << " " << str2 << '\n';


	return 0;
}