#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string answer = "";
	vector<char> oldStr;
	vector<char> newStr;
	string str;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
		oldStr.push_back(str[i]);
	
	int i = 0;
	while (true)
	{
		newStr.push_back(oldStr[i]);
		i = i + oldStr[i] - 64;
		if (i >= oldStr.size())
			break;
	}
	
	for (const auto& e : newStr)
		cout << e;
	cout << '\n';

	
	return 0;
}