#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int n1, n2, n;

	cin >> n1 >> n2 >> n;
	for (int i = n1; i <= n2; ++i)
	{
		string str = to_string(i);
		for (int j = 0; j < str.length(); ++j)
		{
			if (str[j] == n + '0')
				answer += 1;
		}
	}
	cout << answer << '\n';

	return 0;
}