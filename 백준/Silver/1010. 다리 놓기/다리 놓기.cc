#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long combination(const long long n, const long long k)
{
	long long result = 1;
	for (int i = 1; i <= k; ++i)
		result = result * (n - k + i) / i;
	return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int test;
	long long n, k;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		cin >> n >> k;
		cout << combination(max(n, k), min(n, k)) << '\n';
	}

	return 0;
}