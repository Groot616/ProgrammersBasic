#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<float> info;
	float sum = 0;
	float cnt = 0;

	cin >> n;
	info.resize(n);
	for (auto& x : info) cin >> x;

	for (const auto& e : info)
	{
		if (e != -1)
		{
			sum += e;
			++cnt;
		}
	}
	cout << sum / cnt << '\n';

	return 0;
}