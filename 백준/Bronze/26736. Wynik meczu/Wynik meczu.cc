#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	unordered_map<char, int> cnt;
	int ACnt = 0;
	int BCnt = 0;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
		cnt[str[i]]++;

	for (auto it = cnt.begin(); it != cnt.end(); ++it)
	{
		if (it->first == 'A')
			ACnt += it->second;
		else
			BCnt = it->second;
	}
	cout << ACnt << " : " << BCnt << '\n';

	return 0;
}