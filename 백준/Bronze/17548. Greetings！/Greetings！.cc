#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string answer = "";
	string str;
	unordered_map<char, int> UM_AlphaCnt;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
		UM_AlphaCnt[str[i]]++;

	int eCnt;
	for (const auto& e : UM_AlphaCnt)
		if (e.first == 'e')
			eCnt = 2 * e.second;

	answer += "h";
	for (int i = 0; i < eCnt; ++i)
		answer += "e";
	answer += "y";
	cout << answer << '\n';

	return 0;
}