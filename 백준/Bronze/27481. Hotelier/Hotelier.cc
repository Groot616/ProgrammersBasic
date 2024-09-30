#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	string str = "0000000000";
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		char ch;
		cin >> ch;
		if (ch == 'L')
		{
			auto idx = str.find('0');
			if (idx != string::npos)
				str[idx] = '1';
		}
		else if (ch == 'R')
		{
			reverse(str.begin(), str.end());
			auto idx = str.find('0');
			if (idx != string::npos)
				str[idx] = '1';
			reverse(str.begin(), str.end());
		}
		else
			str[ch - '0'] = '0';
	}
	cout << str << '\n';

	return 0;
}