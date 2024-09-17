#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int getMoney(int length)
{
	if (length == 136)
		return 1000;
	else if (length == 142)
		return 5000;
	else if (length == 148)
		return 10000;
	else if (length == 154)
		return 50000;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int cnt;
	cin >> cnt;
	cin.ignore();
	for (int i = 0; i < cnt; ++i)
	{
		string lengthStr;
		getline(cin, lengthStr);
		stringstream ss(lengthStr);
		int widthLength;
		int heightLength;
		ss >> widthLength >> heightLength;
		answer += getMoney(widthLength);
	}
	cout << answer << '\n';

	return 0;
}