#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> answer;
	queue<int> q;
	int n, k;

	cin >> n >> k;
	for (int i = 1; i <= n; ++i)
		q.push(i);

	while (!q.empty())
	{
		for (int i = 0; i < k - 1; ++i)
		{
			int tmp;
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		answer.push_back(q.front());
		q.pop();
	}

	cout << "<" << answer[0];
	for (int i = 1; i<answer.size(); ++i)
		cout << ", " << answer[i];
	cout << ">";

	return 0;
}