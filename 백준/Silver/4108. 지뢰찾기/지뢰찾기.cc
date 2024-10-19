#include <iostream>
#include <vector>

using namespace std;

void makeMap(const int row, const int col, vector<vector<char>>& map)
{
	map.resize(row);
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			char ch;

			cin >> ch;
			if (ch == '*')
				map[i].push_back(ch);
			else
				map[i].push_back('0');
		}
	}
}

vector<pair<int, int>> findDanger(const vector<vector<char>> map)
{
	vector<pair<int, int>> retVec;

	for (int i = 0; i < map.size(); ++i)
	{
		for (int j = 0; j < map[i].size(); ++j)
		{
			if (map[i][j] == '*')
				retVec.push_back(make_pair(i, j));
		}
	}
	return retVec;
}

void refreshMap(vector<vector<char>> &map, const vector<pair<int, int>> boomPos)
{
	for (int i = 0; i < boomPos.size(); ++i)
	{
		int x = boomPos[i].first;
		int y = boomPos[i].second;

		for (int i = x - 1; i <= x + 1; ++i)
		{
			for (int j = y - 1; j <= y + 1; ++j)
			{
				if ((i >= 0 && i < map.size()) && (j >= 0 && j < map[0].size()))
				{
					if (map[i][j] == '*') continue;
					else map[i][j] = (map[i][j] - '0' + 1) + '0';
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int col, row;

	while (true)
	{
		vector<pair<int, int>> boomPos;
		vector<vector<char>> map;

		cin >> row >> col;
		if (row == 0 && col == 0)
			break;

		makeMap(row, col, map);
		boomPos = findDanger(map);
		refreshMap(map, boomPos);

		for (const auto& e1 : map)
		{
			for (const auto& e2 : e1)
				cout << e2;
			cout << '\n';
		}
	}
	return 0;
}