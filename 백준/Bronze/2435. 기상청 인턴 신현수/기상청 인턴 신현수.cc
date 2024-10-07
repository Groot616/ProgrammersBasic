#include <iostream>
#include <stack>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	stack<int> total;
	vector<int> forSum;
	vector<int> sum;

	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		int n;
		cin >> n;
		total.push(n);
	}

	while (total.size() >= k)
	{
		for (int i = 0; i < k; ++i)
		{
			if (!total.empty())
			{
				forSum.push_back(total.top());
				total.pop();
			}
		}
		sum.push_back(accumulate(forSum.begin(), forSum.end(), 0));
		for (int i = forSum.size() - 1; i >= 1; --i)
			total.push(forSum[i]);
		forSum.clear();
	}
	cout << *max_element(sum.begin(), sum.end()) << '\n';

	return 0;
}