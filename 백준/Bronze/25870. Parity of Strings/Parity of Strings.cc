#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	unordered_map<char, int> chCnt;
	int even = 0;
	int odd = 0;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
		chCnt[str[i]]++;
	for (auto it = chCnt.begin(); it != chCnt.end(); ++it)
	{
		if (it->second % 2 == 0)
			even += 1;
		else
			odd += 1;
	}
	if (even != 0 && odd == 0)
		cout << "0" << '\n';
	else if (even == 0 && odd != 0)
		cout << "1" << '\n';
	else
		cout << "2" << '\n';

	return 0;
}