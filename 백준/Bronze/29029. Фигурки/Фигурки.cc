#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	string str;
	unordered_map<char, int> CardinalDirections;
	int cnt = 0;

	cin >> n;
	cin >> str;
	for (int i = 0; i < n; ++i)
	{
		CardinalDirections[str[i]]++;
	}
	int max = 0;
	char target;
	for (auto it = CardinalDirections.begin(); it != CardinalDirections.end(); ++it)
	{
		if (it->second > max)
		{
			max = it->second;
			target = it->first;
		}
	}
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] != target)
			++cnt;
	}
	cout << cnt << '\n';


	return 0;
}