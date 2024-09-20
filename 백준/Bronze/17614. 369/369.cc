#include <iostream>
#include <string>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; ++i)
	{
		string str = to_string(i);
		int length = str.length();
		for (int i = 0; i < length; ++i)
		{
			if (str[i] == '3' || str[i] == '6' || str[i] == '9')
				++cnt;
		}
	}
	cout << cnt << '\n';

	return 0;
}