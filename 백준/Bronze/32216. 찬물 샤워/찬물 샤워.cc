#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	vector<int> result;
	vector<int> d;
	int n, k, t;

	cin >> n >> k >> t;
	d.resize(n);
	for (auto& x : d) cin >> x;
	if (t < k)
		t = t + d[0] + abs(t - k);
	else if (t > k)
		t = t + d[0] - abs(t - k);
	else
		t = t;

	for (int i = 0; i < n; ++i)
	{
		int tmp = 0;
		if (t + d[i] < k)
		{
			t = t + d[i] + abs(t - k);
			result.push_back(t + d[i] + abs(t - k));
		}
		else if (t + d[i] > k)
		{
			t = t + d[i] - abs(t - k);
			result.push_back(t + d[i] - abs(t - k));
		}
	}
	for (const auto& e : result)
		answer += abs(e - k);
	cout << answer << '\n';

	return 0;
}