#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int n;
	unordered_map<char, int> card;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); ++j)
			card[str[j]]++;
	}
	for (auto it = card.begin(); it != card.end(); ++it)
	{
		if (it->first == 'A')
			answer += 4 * it->second;
		else if (it->first == 'K')
			answer += 3 * it->second;
		else if (it->first == 'Q')
			answer += 2 * it->second;
		else if (it->first == 'J')
			answer += it->second;
	}
	cout << answer << '\n';

	return 0;
}