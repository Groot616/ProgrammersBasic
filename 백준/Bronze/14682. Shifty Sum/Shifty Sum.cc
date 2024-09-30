#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	string str;
	int n;

	cin >> str;
	cin >> n;
	answer += stoi(str);
	for (int i = 0; i < n; ++i)
	{
		str += '0';
		answer += stoi(str);
	}
	cout << answer << '\n';

	return 0;
}