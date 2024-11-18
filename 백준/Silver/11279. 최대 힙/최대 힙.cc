#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	priority_queue<long long> pq;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		long long tmp;
		cin >> tmp;
		if(tmp != 0)
			pq.push(tmp);
		else
		{
			if (!pq.empty())
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
			else
				cout << "0" << '\n';
		}
	}

	return 0;
}