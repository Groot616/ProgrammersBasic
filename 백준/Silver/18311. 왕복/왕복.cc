#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	long long n, k;
	vector<long long> flag;	// 각 코스의 길이
	long long totalLength;

	cin >> n >> k;
	flag.resize(n);
	for (auto& x : flag) cin >> x;
	totalLength = accumulate(flag.begin(), flag.end(), 0);

	if (totalLength <= k)
	{
		k -= totalLength;
		for (int i = flag.size() - 1; i >= 0; --i)
		{
			k -= flag[i];
			if (k < 0)
			{
				answer = i + 1;
				break;
			}
		}
	}
	else
	{
		for (int i = 0; i < flag.size(); ++i)
		{
			k -= flag[i];
			if (k < 0)
			{
				answer = i + 1;
				break;
			}
		}
	}
	cout << answer << '\n';

	return 0;
}