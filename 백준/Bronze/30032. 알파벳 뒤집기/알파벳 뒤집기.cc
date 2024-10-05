#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, pos;

	cin >> n >> pos;
	for (int i = 0; i < n; ++i)
	{
		string answer = "";
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); ++j)
		{
			if (pos == 1)
			{
				if (str[j] == 'b')
					answer += 'p';
				else if (str[j] == 'p')
					answer += 'b';
				else if (str[j] == 'q')
					answer += 'd';
				else
					answer += 'q';
			}
			else
			{
				if (str[j] == 'b')
					answer += 'd';
				else if (str[j] == 'd')
					answer += 'b';
				else if (str[j] == 'q')
					answer += 'p';
				else
					answer += 'q';
			}
		}
		cout << answer << '\n';
	}

	return 0;
}