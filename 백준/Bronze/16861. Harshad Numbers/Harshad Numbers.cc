#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string answer = "";
	string str;
	int sum = 0;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
		sum += str[i] - '0';
	if (stoi(str) % sum == 0)
		answer += str;
	else
	{
		while (true)
		{
			sum = 0;
			str = to_string(stoi(str) + 1);
			for (int i = 0; i < str.length(); ++i)
				sum += str[i] - '0';
			if (stoi(str) % sum == 0)
			{
				answer = str;
				break;
			}
		}
	}
	cout << answer << '\n';

	return 0;
}