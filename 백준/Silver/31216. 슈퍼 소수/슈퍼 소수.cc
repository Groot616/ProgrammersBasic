#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int LIMIT = 350000;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	vector<long long> num;
	vector<bool> prime(LIMIT + 1, true);
	prime[0] = prime[1] = false;
	for (int j = 2; j <= LIMIT; ++j)
	{
		if (prime[j])
		{
			num.push_back(j);
			for (int k = j * 2; k <= LIMIT; k += j)
				prime[k] = false;
		}
	}

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		long long n;

		cin >> n;
		cout << num[num[n - 1] - 1] << '\n';
	}

	return 0;
}