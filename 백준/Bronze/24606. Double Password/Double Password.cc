#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 1;
	string str1;
	string str2;
	
	cin >> str1;
	cin >> str2;
	for (int i = 0; i < str1.length(); ++i)
	{
		if (str1[i] == str2[i])
			answer *= 1;
		else
			answer *= 2;
	}
	cout << answer << '\n';

	return 0;
}