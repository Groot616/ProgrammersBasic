#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long n, m;
	long long last = 1;
	vector<int> arr;
	vector<int> tmp;

	cin >> n >> m;
	arr.resize(n);
	for (auto& x : arr) cin >> x;
	if (arr.size() == 1)
		last = arr[0] % m;
	else
	{
		for (int i = arr.size() - 1; i >= 0; --i)
		{
			long long A = arr[i] % m;
			last = (last % m) * (A % m);
			last %= m;
		}
	}
	cout << last << '\n';

	return 0;
}