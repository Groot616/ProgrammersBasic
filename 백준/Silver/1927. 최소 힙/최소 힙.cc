#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	priority_queue<int, vector<int>, greater<int>> pq;

	int n;

	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		int x;

		cin >> x;
		if (x == 0 && !pq.empty())
		{
			cout << pq.top() << '\n';
			pq.pop();
		}
		else if (x == 0 && pq.empty())
			cout << "0" << '\n';
		else
			pq.push(x);
	}

	return 0;
}