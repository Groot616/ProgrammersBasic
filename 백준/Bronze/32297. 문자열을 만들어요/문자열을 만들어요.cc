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

	cin >> n;
	cin >> str;
	if (str.find("gori") != string::npos)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';

	return 0;
}