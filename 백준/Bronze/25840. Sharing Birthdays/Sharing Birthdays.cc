#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	unordered_set<string> birthday;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		birthday.insert(str);
	}
	cout << birthday.size() << '\n';

	return 0;
}