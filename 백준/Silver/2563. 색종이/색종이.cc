#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	int n;
	vector<vector<bool>> area(100, vector<bool>(100, false));

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;

		// 좌표 -1이 벡터의 위치
		for (int j = x - 1; j < x + 9; ++j)
		{
			for (int k = y - 1; k < y + 9; ++k)
			{
				if (j < 100 && k < 100)
					area[j][k] = true;
			}
		}
	}
	
	for (int i = 0; i < area.size(); ++i)
	{
		for (int j = 0; j < area[i].size(); ++j)
		{
			if (area[i][j] == true)
				answer += 1;
		}
	}
	cout << answer << '\n';

	return 0;
}