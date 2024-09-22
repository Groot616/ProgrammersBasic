#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string answer = "";
	string str;
	unordered_set<char> alphabet;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
		alphabet.insert(str[i]);
	
	if (alphabet.size() < 5)
		answer += "NO";
	else
	{
		if (alphabet.find('M') != alphabet.end() && alphabet.find('O') != alphabet.end()
			&& alphabet.find('B') != alphabet.end() && alphabet.find('I') != alphabet.end() && alphabet.find('S') != alphabet.end())
			answer += "YES";
		else
			answer += "NO";
	}
	cout << answer << '\n';


	return 0;
}