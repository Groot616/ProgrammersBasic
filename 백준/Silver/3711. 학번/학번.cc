#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		vector<int> info;

		cin >> n;
		info.resize(n);
		for (auto& x : info) cin >> x;

		int quoat = n;
		while (true)
		{
			int cnt = 0;

			vector<bool> divResult;
			divResult.resize(quoat, false);
			for (int j = 0; j < info.size(); ++j)
			{
				if (divResult[info[j] % quoat] == true)
					break;
				else
				{
					divResult[info[j] % quoat] = true;
					++cnt;
				}
			}
			if (cnt == n)
				break;
			else
				++quoat;
		}
		cout << quoat << '\n';
	}

	return 0;
}