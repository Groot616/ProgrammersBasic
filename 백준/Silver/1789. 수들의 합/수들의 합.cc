#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> sumArr(99999, 0);

long long getSum(long long start)
{
	if (start == 0)
		return 0;
	else if (sumArr[start] != 0)
		return sumArr[start];
	else
	{
		sumArr[start] = start + getSum(start - 1);
		return sumArr[start];
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long s;
	sumArr[0] = 0;
	sumArr[1] = 1;

	cin >> s;
	long long idx = 1;
	while (getSum(idx) <= s)
		++idx;
	cout << idx - 1 << '\n';

	return 0;
}