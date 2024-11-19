#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

void makeMap(vector<vector<int>>& field, unordered_map<int, int>& mapInfo, const int& x, const int& y)
{
	field.resize(y, vector<int>(x));
	for (int i = 0; i < y; ++i)
	{
		for (int j = 0; j < x; ++j)
		{
			int info;
			cin >> info;
			mapInfo[info]++;
			field[i][j] = info;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int answer = 0;
	int x, y, block;
	vector<vector<int>> field;
	unordered_map<int, int> mapInfo;

	cin >> y >> x >> block;
	makeMap(field, mapInfo, x, y);
	
	int minTimeResult = 9999999999;
	for (int targetHeight = 0; targetHeight <= 256; ++targetHeight)
	{
		int copyBlock = block;
		int totalTime = 0;
		int minTime = 0;
		int addTime = 0;
		for (auto blockCnt : mapInfo)
		{
			if (blockCnt.first > targetHeight)
			{
				totalTime += 2 * (blockCnt.first - targetHeight) * blockCnt.second;
				copyBlock += (blockCnt.first - targetHeight) * blockCnt.second;
				minTime += 2 * (blockCnt.first - targetHeight) * blockCnt.second;
			}
			else if (blockCnt.first < targetHeight)
			{
				totalTime += (targetHeight - blockCnt.first) * blockCnt.second;
				copyBlock -= (targetHeight - blockCnt.first) * blockCnt.second;
				addTime += (targetHeight - blockCnt.first) * blockCnt.second;
			}
		}

		if (totalTime < minTimeResult && copyBlock >= 0)
		{
			minTimeResult = totalTime;
			answer = targetHeight;
		}
		else if (totalTime == minTimeResult && copyBlock >= 0)
		{
			minTimeResult - totalTime;
			answer = targetHeight;
		}
	}
	cout << minTimeResult << " " << answer << '\n';

	return 0;
}