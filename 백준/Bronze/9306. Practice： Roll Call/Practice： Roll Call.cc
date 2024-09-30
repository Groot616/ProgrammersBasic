#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string str1, str2;
		cin >> str1;
		cin >> str2;
		cout << "Case " << i + 1 << ": " << str2 << ", " << str1 << '\n';
	}

	return 0;
}