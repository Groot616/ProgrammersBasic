#include <iostream>
#include <vector>
using namespace std;

void fillArea(vector<vector<bool>>& area, const vector<pair<int, int>> coordi)
{
	for (int i = coordi[0].first; i < coordi[1].first; ++i)
	{
		for (int j = coordi[0].second; j < coordi[1].second; ++j)
			area[i][j] = true;
	}
}

int getArea(const vector<vector<bool>> area)
{
	int retArea = 0;

	for (const auto& col : area)
	{
		for (const auto& row : col)
		{
			if (row == true)
				retArea += 1;
		}
	}
	return retArea;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	int n;
	vector<vector<bool>> area(500, vector<bool>(500, false));

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		vector<pair<int, int>> coordi;
		int x1, y1, x2, y2;

		cin >> x1 >> y1 >> x2 >> y2;
		coordi.push_back(make_pair(x1, y1));
		coordi.push_back(make_pair(x2, y2));
		fillArea(area, coordi);
	}
	cout << getArea(area) << '\n';

	return 0;
}