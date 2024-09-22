#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, length;
	int cnt = 0;

	cin >> n >> length;
	for (int i = 0; i < n; ++i)
	{
		
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); ++j)
		{
			if (str[j] == '+')
			{
				++cnt;
				break;
			}
		}
	}
	cout << cnt << '\n';

	return 0;
}