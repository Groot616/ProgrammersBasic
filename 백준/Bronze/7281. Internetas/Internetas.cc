#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 
	int n;
	vector<pair<int, int>> internet;
	vector<int> offline;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int hour, check;
		cin >> hour >> check;
		internet.push_back(make_pair(hour, check));
	}
	for (int i = 1; i < internet.size(); ++i)
	{
		if (internet[i].second == 1)
		{
			for (int j = i - 1; j >= 0; --j)
			{
				if (internet[j].second == 1)
				{
					offline.push_back(internet[i].first - internet[j].first);
					break;
				}
			}
		}
	}
	cout << *max_element(offline.begin(), offline.end()) << '\n';

	return 0;
}