#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> total;
	vector<int> money = { 1, 5, 10, 20, 50, 100 };

	total.resize(6);
	for (auto& x : total) cin >> x;
	for (int i = 0; i < total.size(); ++i)
		total[i] *= money[i];
	
	int max = 0;
	int idx = 0;
	for (int i = 0; i < total.size(); ++i)
	{
		if (total[i] >= max)
		{
			max = total[i];
			idx = i;
		}
	}
	cout << money[idx] << '\n';

	return 0;
}