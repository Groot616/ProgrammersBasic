#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	vector<pair<char, int>> result = { {'D', 0}, {'p', 0} };
	for (int i = 0; i < n; ++i)
	{
		char ch;
		cin >> ch;
		if (ch == 'D')
		{
			if (abs(result[0].second - result[1].second) != 2)
				result[0].second++;
		}
		else
		{
			if (abs(result[0].second - result[1].second) != 2)
				result[1].second++;
		}
	}
	cout << result[0].second << ":" << result[1].second << '\n';

	return 0;
}