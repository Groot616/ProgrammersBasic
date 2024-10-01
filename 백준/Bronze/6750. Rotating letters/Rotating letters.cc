#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	unordered_set<char> alpha;
	vector<char> sign = { 'I', 'O', 'S', 'H', 'Z', 'X', 'N' };

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
		alpha.insert(str[i]);

	int cnt = 0;
	for (int i = 0; i < sign.size(); ++i)
	{
		if (alpha.find(sign[i]) != alpha.end())
			++cnt;
	}
	if (cnt == alpha.size())
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';

	return 0;
}