#include <iostream>
#include <set>

using namespace std;

void primeFactorization(int n, set<int> &pNum)
{
	int prime = 2;
	while (n != 1)
	{
		if (n % prime == 0)
		{
			n /= prime;
			pNum.insert(prime);
		}
		else
			++prime;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	set<int> pNum;
	int cnt = 0;

	pNum.insert(1);
	cin >> n >> k;
	for (int i = 1; i <= n; ++i)
	{
		primeFactorization(i, pNum);
		if (*prev(pNum.end()) <= k)
			++cnt;
		pNum.clear();
		pNum.insert(1);
	}
	cout << cnt << '\n';

	return 0;
}