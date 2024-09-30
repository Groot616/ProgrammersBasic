#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string answer = "";
	int n;
	string str;

	cin >> n;
	cin >> str;
	string str1 = str.substr(0, n / 2);
	string str2 = str.substr(n / 2, n);
	str1 == str2 ? answer = "Yes" : answer = "No";
	cout << answer << '\n';

	return 0;
}