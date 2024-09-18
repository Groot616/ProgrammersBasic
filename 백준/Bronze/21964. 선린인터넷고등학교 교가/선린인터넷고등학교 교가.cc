#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int strLength;
	string str;

	cin >> strLength;
	cin >> str;
	cout << str.substr(str.size() - 5);

	return 0;
}