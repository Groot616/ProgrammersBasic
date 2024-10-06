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
	unordered_map<char, int> cnt;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] >= 97 && str[i] <= 122)
			cnt[str[i] - 32]++;
		else
			cnt[str[i]]++;
	}

	int max = 0;
	bool multiple = false;
	char answer;
	for (auto it = cnt.begin(); it != cnt.end(); ++it)
	{
		if (it->second > max)
		{
			max = it->second;
			answer = it->first;
			multiple = false;
		}
		else if (it->second == max)
		{
			multiple = true;
		}
	}
	if (multiple) answer = '?';
	cout << answer << '\n';

	return 0;
}