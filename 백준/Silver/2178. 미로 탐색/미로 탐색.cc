#include <iostream>
#include <vector>
#include <tuple>
#include <queue>

using namespace std;

const vector<int> dx = { 0, 0, 1, -1 };
const vector<int> dy = { 1, -1, 0, 0 };

struct Coordi
{
	int y, x;

	Coordi(int y, int x) : y(y), x(x) {}

	bool bIsValid(const int& width, const int& height)
	{
		return x >= 0 && x <width && y >= 0 && y < height;
	}
};

void makeMap(vector<vector<int>>& map, const int& x, const int& y)
{
	map.resize(y, vector<int>(x));
	for (int i = 0; i < y; ++i)
	{
		string nums;
		cin >> nums;
		for (int j = 0; j < nums.length(); ++j)
			map[i][j] = nums[j] - '0';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int answer = 0;
	int x, y;
	vector<vector<int>> map;

	cin >> y >> x;
	makeMap(map, x, y);

	queue<Coordi> q;
	vector<vector<bool>> visited(y, vector<bool>(x, false));
	q.push({ 0, 0 });
	visited[0][0] = true;

	while (!q.empty())
	{
		Coordi current = q.front();
		q.pop();
		for (int i = 0; i < 4; ++i)
		{
			Coordi next = { current.y + dy[i], current.x + dx[i] };
			if (next.bIsValid(x, y) && !visited[next.y][next.x] && map[next.y][next.x] == 1)
			{
				q.push({ next.y, next.x });
				visited[next.y][next.x] = true;
				map[next.y][next.x] = map[current.y][current.x] + 1;
			}
		}
	}
	cout << map[y - 1][x - 1] << '\n';

	return 0;
}