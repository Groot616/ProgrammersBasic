#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string answer;
	int t;
	unordered_map<char, string> vecString;
	string afterZip;
	int answerStartPos;
	int answerEndPos;

	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; ++i)
	{
		string str;
		char zip;

		cin >> str >> zip;
		vecString[zip] = str;
	}

	cin >> afterZip;
	for (int i = 0; i < afterZip.length(); ++i)
	{
		auto it = vecString.find(afterZip[i]);
		if (it != vecString.end())
			answer += it->second;
	}

	cin >> answerStartPos >> answerEndPos;
	cout << answer.substr(answerStartPos - 1, answerEndPos - answerStartPos + 1);

	return 0;
}