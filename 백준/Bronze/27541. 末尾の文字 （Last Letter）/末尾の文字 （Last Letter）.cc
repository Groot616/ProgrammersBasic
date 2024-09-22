#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int length;
	string str;

	cin >> length;
	cin >> str;
	if (str[length - 1] == 'G')
	{
		for (int i = 0; i < length - 1; ++i)
			cout << str[i];
		cout << '\n';
	}
	else
		cout << str << 'G' << '\n';
	

	return 0;
}