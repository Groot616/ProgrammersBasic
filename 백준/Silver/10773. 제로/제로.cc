#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int k;
	stack<int> money;

	cin >> k;
	for (int i = 0; i < k; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp == 0)
		{
			if (!money.empty())
				money.pop();
		}
		else
			money.push(tmp);
	}

	while(!money.empty())
	{
		answer += money.top();
		money.pop();
	}
	cout << answer << '\n';

	return 0;
}