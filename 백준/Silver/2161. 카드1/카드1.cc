#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	queue<int> q;

	cin >> n;
	for (int i = 0; i < n; ++i)
		q.push(i + 1);

	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();

		if (!q.empty())
		{
			q.push(q.front());
			q.pop();
		}
	}

	return 0;
}