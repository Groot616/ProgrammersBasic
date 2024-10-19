#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int checkCnt = 0;
		string str;
		set<char> checkOneAlpha;

		cin >> str;
		for (int j = 0; j < str.length(); ++j)
			checkOneAlpha.insert(str[j]);

		if (checkOneAlpha.size() == 1)
			++answer;
		else
		{
			int idx = 0;
			while (true)
			{
				if (idx == str.length())
					break;

				if (str[idx] == str[idx + 1])
					str.erase(str.begin() + 1);
				else
					++idx;
			}
			if (idx == checkOneAlpha.size())
				++answer;
		}
	}
	cout << answer << '\n';

	return 0;
}