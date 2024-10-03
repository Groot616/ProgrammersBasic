#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int cnt = 0;
	string str;
	
	cin >> str;
	while (true)
	{
		if (str.length() == 1)
			break;

		int mul = 1;
		for (int i = 0; i < str.length(); ++i)
			mul *= (str[i] - '0');
		++cnt;
		str = to_string(mul);
		
	}
	cout << cnt << '\n';

	return 0;
}