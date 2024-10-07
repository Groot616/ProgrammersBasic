#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cnt = 0;
	int lastCnt = 0;
	int n, m;
	queue<int> chocolate;

	cin >> n >> m;
	chocolate.push(n * m);

	if (n == 1 && m == 1)
	{
		cout << cnt << '\n';
		return 0;
	}
	else if (n == 1)
	{
		cout << m - 1 << '\n';
		return 0;
	}
	else if (m == 1)
	{
		cout << n - 1 << '\n';
		return 0;
	}

	while (!chocolate.empty())
	{
		int nowChocolate = chocolate.front();
		chocolate.pop();
		if (nowChocolate != 1 && nowChocolate % 2 == 0)
		{
			for (int i = 0; i < 2; ++i)
				chocolate.push(nowChocolate / 2);
			++cnt;
		}
		else if (nowChocolate != 1 && nowChocolate % 2 == 1)
		{
			for (int i = 0; i < 2; ++i)
				chocolate.push(nowChocolate / 2 + i);
			++cnt;
		}
	}
	cout << cnt + lastCnt / 2 << '\n';

	return 0;
}