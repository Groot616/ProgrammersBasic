#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string answer = "";
	string str;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == 'E')
			answer += 'I';
		else if (str[i] == 'I')
			answer += 'E';
		else if (str[i] == 'S')
			answer += 'N';
		else if (str[i] == 'N')
			answer += 'S';
		else if (str[i] == 'T')
			answer += 'F';
		else if (str[i] == 'F')
			answer += 'T';
		else if (str[i] == 'J')
			answer += 'P';
		else
			answer += 'J';
	}
	cout << answer << '\n';
	
	return 0;
}