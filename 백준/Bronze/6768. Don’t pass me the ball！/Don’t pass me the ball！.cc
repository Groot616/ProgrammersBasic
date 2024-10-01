#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int cnt = 0;

	cin >> n;
	for (int i = 0; i < n - 3; ++i)
	{
		for (int j = i + 1; j < n - 2; ++j)
		{
			for (int k = j + 1; k < n - 1; ++k)
			{
				++cnt;
			}
		}
	}
	cout << cnt << '\n';

	return 0;
}