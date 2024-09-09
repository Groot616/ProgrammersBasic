#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compair(pair<int, int> a, pair<int, int> b)
{
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}

int main()
{
	int N;
	int x, y;
	vector<pair<int, int>> coordi;

	cin >> N;
	
	for (int i = 0; i < N; ++i)
	{
		cin >> x >> y;
		coordi.push_back(make_pair(x, y));

	}
	sort(coordi.begin(), coordi.end(), compair);

	for (int i = 0; i < N; ++i)
		cout << coordi[i].first << " " << coordi[i].second << "\n";

	return 0;
}