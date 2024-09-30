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
	int n;
	vector<pair<int, int>> coordi;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		coordi.push_back(make_pair(x, y));
	}
	for (int i = 1; i < coordi.size(); ++i)
		answer += abs(coordi[i].first - coordi[i - 1].first + coordi[i].second - coordi[i - 1].second);
	answer += abs(coordi[coordi.size() - 1].first - coordi[0].first + coordi[coordi.size() - 1].second - coordi[0].second);
	cout << answer << '\n';

	return 0;
}