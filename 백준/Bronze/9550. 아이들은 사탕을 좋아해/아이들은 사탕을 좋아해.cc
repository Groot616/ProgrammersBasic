#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int answer = 0;
		int n, k;
		vector<int> candy;
		cin >> n >> k;

		candy.resize(n);
		for (auto& x : candy) cin >> x;
		for (int j = 0; j < candy.size(); ++j)
			answer += candy[j] / k;

		cout << answer << '\n';
	}

	return 0;
}