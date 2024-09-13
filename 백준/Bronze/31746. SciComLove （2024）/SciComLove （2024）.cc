#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string answer = "";
	string str = "SciComLove";
	string n;

	cin >> n;
	int length = n.length();
	if ((n[length - 1] - '0') % 2 == 1)
	{
		reverse(str.begin(), str.end());
		answer = str;
	}
	else
		answer = str;

	cout << str << "\n";

	return 0;
}