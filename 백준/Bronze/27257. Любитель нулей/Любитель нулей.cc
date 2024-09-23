#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	unordered_map<char, int> numCnt;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
		numCnt[str[i]]++;

	int cnt = 0;
	if (numCnt.find('0') != numCnt.end())
		cnt = numCnt.find('0')->second;
	
	bool bIsStartZero = false;
	bool bIsEndZero = false;
	if (str[0] == '0') bIsStartZero = true;
	if (str[str.length() - 1] == '0') bIsEndZero = true;
	if (bIsStartZero) --cnt;
	if (bIsEndZero) --cnt;
	for (int i = 1; i < str.length(); ++i)
	{
		if (bIsStartZero && str[i] == '0')
			--cnt;
		else
		{
			bIsStartZero = false;
			break;
		}
	}
	for (int i = str.length() - 2; i >= 0; --i)
	{
		if (bIsEndZero && str[i] == '0')
			--cnt;
		else
		{
			bIsEndZero = false;
			break;
		}
	}
	cout << cnt << '\n';

	return 0;
}