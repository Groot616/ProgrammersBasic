#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true)
	{
		int answer = 0;
		int n;
		
		cin >> n;
		if (n == 0)
			break;

		for (int i = 1; i <= n; ++i)
		{
			answer += i * i;
		}
		cout << answer << '\n';
	}

	return 0;
}