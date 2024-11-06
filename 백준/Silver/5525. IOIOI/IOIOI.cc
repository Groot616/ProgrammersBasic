#include <iostream>
#include <string>

using namespace std;

void makeStr(string & IOI, const int n)
{
	for (int i = 0; i < 2 * n + 1; ++i)
	{
		if (i % 2 == 0)
			IOI += "I";
		else
			IOI += "O";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int answer = 0;
	int n, s;
	string myStr;

	cin >> n;
	cin >> s;
	cin >> myStr;

	string IOI = "";
	makeStr(IOI, n);
	while (true)
	{
		auto it = myStr.find(IOI);
		if (it == string::npos)
			break;
		else
		{
			++answer;
			myStr.erase(myStr.begin(), myStr.begin() + it + 2);
		}
	}
	cout << answer << '\n';

	return 0;
}