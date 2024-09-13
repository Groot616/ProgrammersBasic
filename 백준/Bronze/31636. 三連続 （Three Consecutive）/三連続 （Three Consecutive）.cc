#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	int n;

	cin >> n;
	cin >> str;

	if (str.find("ooo") != string::npos)
		cout << "Yes" << "\n";
	else
		cout << "No" << "\n";

	return 0;
}