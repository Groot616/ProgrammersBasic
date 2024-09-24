#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	unordered_map<string, string> imo = { {"CU", "see you"}, {":-)", "I’m happy"}, {":-(", "I’m unhappy"}, {";-)", "wink"},
		{":-P", "stick out my tongue"}, {"(~.~)", "sleepy"}, {"TA", "totally awesome"}, {"CCC", "Canadian Computing Competition"},
		{"CUZ", "because"}, {"TY", "thank-you"}, {"YW", "you’re welcome"}, {"TTYL", "talk to you later"} };

	string str;
	while (true)
	{
		cin >> str;
		if(str == "TTYL")
		{
			auto it = imo.find("TTYL");
			if (it != imo.end())
				cout << it->second;
			break;
		}
		else
		{
			auto it = imo.find(str);
			if (it != imo.end())
				cout << it->second << '\n';
			else
				cout << str << '\n';
		}
	}

	return 0;
}