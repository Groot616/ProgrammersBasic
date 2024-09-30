#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int n;
	string str1;
	string str2;

	cin >> n;
	cin >> str1;
	cin >> str2;
	for (int j = 0; j < str1.length(); ++j)
	{
		char current = str1[j];
		char target = str2[j];

		int up = (target - current + 26) % 26;
		int down = (current - target + 26) % 26;

		answer += min(up, down);
	}
	cout << answer << '\n';

	return 0;
}