#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	string str;
	int n;

	cin >> n;
	cin >> str;

	set<char> element;
	for (int i = 0; i < n; ++i)
	{
		element.insert(str[i]);
	}
	if (element.size() == 1)
		cout << "Yes" << "\n";
	else
		cout << "No" << "\n";

	return 0;
}