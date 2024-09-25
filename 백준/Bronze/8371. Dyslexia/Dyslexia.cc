#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int length;
	string str1, str2;

	cin >> length;
	cin >> str1;
	cin >> str2;
	for (int i = 0; i < length; ++i)
	{
		if (str1[i] != str2[i])
			answer += 1;
	}
	cout << answer << '\n';

	return 0;
}