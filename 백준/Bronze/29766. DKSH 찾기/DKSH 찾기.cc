#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	string str;
	int pos = 0;

	cin >> str;
	while ((pos = str.find("DKSH", pos)) != string::npos)
	{
		++answer;
		pos += 4;
	}

	cout << answer << '\n';

	return 0;
}