#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int length;
	string str;
	int answer = 0;

	cin >> length;
	cin >> str;
	map<char, int> element;
	for (int i = 0; i < length; ++i)
	{
		element[str[i]]++;
	}

	for (auto it = element.begin(); it != element.end(); ++it)
	{
		if (it->first == 'j' || it->first == 'i')
			answer += 2 * it->second;
		else
			answer += it->second;
	}
	cout << answer << "\n";

	return 0;
}