#include <iostream>
#include <vector>

using namespace std;

void checkBoom(int mapSize, vector<vector<char>>& map)
{
	map.resize(mapSize);
	for (int i = 0; i < mapSize; ++i)
	{
		for (int j = 0; j < mapSize; ++j)
		{
			char ch;
			cin >> ch;
			
			if (ch != '.')
				map[i].push_back(ch);
			else
				map[i].push_back('0');
		}
	}
}

vector<pair<int, pair<int, int>>> checkPos(vector<vector<char>> &map)
{
	vector<pair<int, pair<int, int>>> boomCoordi;

	for (int i = 0; i < map.size(); ++i)
	{
		for (int j = 0; j < map[i].size(); ++j)
		{
			if (map[i][j] != '0')
			{
				boomCoordi.push_back(make_pair(map[i][j] - '0', make_pair(i, j)));
				map[i][j] = '*';
			}
		}
	}
	
	return boomCoordi;
}

void makeMap(vector<vector<char>>& map, const vector<pair<int, pair<int, int>>> boomCoordi)
{
	for (int i = 0; i < boomCoordi.size(); ++i)
	{
		int boomCnt = boomCoordi[i].first;
		int x = boomCoordi[i].second.first;
		int y = boomCoordi[i].second.second;
		for (int j = x - 1; j <= x + 1; ++j)
		{
			for (int k = y - 1; k <= y + 1; ++k)
			{
				if ((j < 0 || k < 0))
					continue;
				else if (j >= map.size() || k >= map.size())
					continue;
				else
				{
					if (map[j][k] == '*')
						continue;
					else if (map[j][k] != 'M')
						map[j][k] - '0' + boomCnt >= 10 ? map[j][k] = 'M' : map[j][k] = (map[j][k] - '0' + boomCnt) + '0';
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int mapSize;
	vector<vector<char>> map;
	vector<pair<int, pair<int, int>>> boomCoordi;

	cin >> mapSize;

	checkBoom(mapSize, map);
	boomCoordi = checkPos(map);
	makeMap(map, boomCoordi);

	for (const auto& e1 : map)
	{
		for (const auto& e2 : e1)
			cout << e2;
		cout << '\n';
	}

	return 0;
}