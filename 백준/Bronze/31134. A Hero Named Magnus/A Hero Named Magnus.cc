#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long answer = 0;

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		long long ban;
		cin >> ban;
		answer = 2 * ban - 1;
		cout << answer << "\n";
	}

	return 0;
}