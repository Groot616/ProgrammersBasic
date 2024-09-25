#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		string str;
		getline(cin ,str);
		stringstream ss(str);
		string s1, s2;
		ss >> s1 >> s2;
		cout << s2 << " " << "5" << '\n';
	}

	return 0;
}