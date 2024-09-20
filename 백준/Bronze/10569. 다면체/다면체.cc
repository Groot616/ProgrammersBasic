#include <iostream>
#include <string>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int test;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int edge;
		int line;
		cin >> edge >> line;
		answer = 2 - edge + line;
		cout << answer << '\n';
	}

	return 0;
}