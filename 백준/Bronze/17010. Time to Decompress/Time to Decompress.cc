#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int test;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int cnt;
		char toPrint;
		cin >> cnt;
		cin >> toPrint;
		for (int j = 0; j < cnt; ++j)
			cout << toPrint;
		cout << '\n';
	}

	return 0;
}