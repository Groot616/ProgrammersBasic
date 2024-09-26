#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int n, x, y;
	vector<pair<int, int>> coordi;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;
		coordi.push_back(make_pair(x, y));
	}
	for (int i = 1; i < coordi.size(); ++i)
		answer += abs(coordi[i].first - coordi[i - 1].first) + abs(coordi[i].second - coordi[i - 1].second);
	cout << answer << '\n';

	return 0;
}