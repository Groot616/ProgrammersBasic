#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int n;
	string str;

	cin >> n;
	cin >> str;
	string rStr = str;
	reverse(rStr.begin(), rStr.end());
	for (int i = 0; i < n; ++i)
	{
		if (str[i] != rStr[i])
			++answer;
	}
	cout << answer / 2 << '\n';

	return 0;
}