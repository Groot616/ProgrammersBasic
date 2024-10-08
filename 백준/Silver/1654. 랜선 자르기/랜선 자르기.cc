#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long answer = 0;
	int k, n;
	vector<long long> lan;

	cin >> k >> n;
	lan.resize(k);
	for (auto& x : lan) cin >> x;

	long long maxLength = *max_element(lan.begin(), lan.end());
	long long minLength = 1;
	while (minLength <= maxLength)
	{
		int cnt = 0;
		long long middle = (maxLength + minLength) / 2;

		for (int i = 0; i < lan.size(); ++i)
		{
			cnt += lan[i] / middle;
		}
		if (cnt < n)
			maxLength = middle - 1;
		else
		{
			answer = middle;
			minLength = middle + 1;
		}
	}
	cout << answer << '\n';

	return 0;
}