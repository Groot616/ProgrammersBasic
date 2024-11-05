#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

unordered_map<int, vector<int>> adjLst;

const vector<int> dx = { 0 , 0, 1, -1 };
const vector<int> dy = { 1, -1, 0, 0 };

void bfs(int x, int y, const vector<vector<int>> farm, vector<vector<bool>> &visited, const int width, const int height, int &answer)
{
	queue<pair<int, int>> q;
	
	q.push({ x, y });
	visited[y][x] = true;

	while (!q.empty())
	{
		int nowX = q.front().first;
		int nowY = q.front().second;
		q.pop();

		for (int i = 0; i < dx.size(); ++i)
		{
			int newX = nowX + dx[i];
			int newY = nowY + dy[i];

			if (newX >= 0 && newX < width && newY >= 0 && newY < height && farm[newY][newX] == 1 && !visited[newY][newX])
			{
				q.push({ newX, newY });
				visited[newY][newX] = true;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int test, width, height, total;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int answer = 0;

		cin >> width >> height >> total;
		vector<vector<int>> farm(height, vector<int>(width, 0));
		vector<vector<bool>> visited(height, vector<bool>(width, false));
		
		for (int i = 0; i < total; ++i)
		{
			int x, y;
			cin >> x >> y;
			farm[y][x] = 1;
		}

		for (int y = 0; y < height; ++y)
		{
			for (int x = 0; x < width; ++x)
			{
				if (farm[y][x] == 1 && !visited[y][x])
				{
					bfs(x, y, farm, visited, width, height, answer);
					++answer;
				}
			}
		}
		cout << answer << '\n';
	}

	return 0;
}