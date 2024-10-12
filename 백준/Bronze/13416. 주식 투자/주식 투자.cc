#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, day;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int answer = 0;

		cin >> day;
		for (int j = 0; j < day; ++j)
		{
			int a, b, c;
			cin >> a >> b >> c;

			if (a < 0 && b < 0 && c < 0)
				answer += 0;
			else
				answer += max({ a, b, c });
		}
		cout << answer << '\n';
	}

	return 0;
}