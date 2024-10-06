#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string answer = "";
	string str;
	int totalLength = 0;
	int needZero = 0;

	cin >> str;
	totalLength = str.length();
	needZero = 3 - totalLength % 3;

	reverse(str.begin(), str.end());
	if (str.length() % 3 != 0)
	{
		totalLength = totalLength / 3 + 1;
		for (int i = 0; i < needZero; ++i)
			str += '0';
	}
	else
		totalLength = totalLength / 3;

	for (int i = 0; i < totalLength; ++i)
	{
		int tmp = 0;
		string tmpStr = str.substr(3 * i, 3);
		for (int j = 0; j < tmpStr.length(); ++j)
			tmp += (tmpStr[j] - '0') * (int)pow(2, j);
		answer += to_string(tmp);
	}
	reverse(answer.begin(), answer.end());
	cout << answer << '\n';

	return 0;
}