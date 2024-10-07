#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<pair<string, int>> str;
	vector<pair<string, int>> lowAlpha;
	while (true)
	{
		int n;
		
		cin >> n;
		if (n == 0)
			break;
		
		for (int i = 0; i < n; ++i)
		{
			string word;
			cin >> word;
			str.push_back(make_pair(word, i));
		}
		lowAlpha = str;
		for (int i = 0; i < str.size(); ++i)
		{
			for (int j = 0; j < str[i].first.length(); ++j)
				lowAlpha[i].first[j] = tolower(str[i].first[j]);
		}
		sort(lowAlpha.begin(), lowAlpha.end());
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i].second == lowAlpha[0].second)
				cout << str[i].first << '\n';
		}
		str.clear();
		lowAlpha.clear();
	}

	return 0;
}