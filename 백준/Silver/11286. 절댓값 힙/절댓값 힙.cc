#include <iostream>
#include <vector>
#include <cmath>
#include <queue>

using namespace std;

struct compare
{
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b))
			return a > b;
		return abs(a) > abs(b);
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	priority_queue<long long, vector<long long>, compare> pq;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		long long num;
		cin >> num;
		if(num != 0)
			pq.push(num);
		else
		{
			if (pq.empty())
				cout << "0" << '\n';
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
	}

	return 0;
}