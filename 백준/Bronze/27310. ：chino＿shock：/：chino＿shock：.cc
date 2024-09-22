#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0; i < str.length(); ++i)
		if (str[i] == '_')
			++cnt;

	// 길이 + 콜론
	answer += str.length() + 2;
	answer += 5 * cnt;
	cout << answer << '\n';

	return 0;
}