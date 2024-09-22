#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	unordered_map<char, int> balloon;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); ++j)
			balloon[str[j]]++;
		int min = 999;
		int max = 0;
		for (auto it = balloon.begin(); it != balloon.end(); ++it)
		{
			if (it->second > max) max = it->second;
			if (it->second < min) min = it->second;
		}
		if (balloon.size() == 1)
			cout << '0' << '\n';
		else
			cout << min << '\n';
		balloon.clear();
	}

	return 0;
}