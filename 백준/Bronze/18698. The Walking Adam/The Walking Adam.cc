#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); ++j)
		{
			if (str[j] == 'U')
				++cnt;
			else
				break;
		}
		cout << cnt << '\n';
		cnt = 0;
	}

	return 0;
}