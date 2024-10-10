#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	string str;
	vector<int> cnt = { 0, 0 };

	cin >> str;
	int pos = 0;
	while (str.length() != 0)
	{
		char start = str[0];
		if (start == '0')
		{
			auto it = str.find('1');
			cnt[0]++;
			str.erase(0, it);
			pos = it;
		}
		else
		{
			auto it = str.find('0');
			cnt[1]++;
			str.erase(0, it);
			pos = it;
		}
	}
	cout << *min_element(cnt.begin(), cnt.end());

	return 0;
}