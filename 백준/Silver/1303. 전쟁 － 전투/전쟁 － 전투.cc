#include <iostream>
#include <vector>
#include <unordered_set>
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
		return x >= 0 && x < width && y >= 0 && y < height;
	}
};

void makeMaps(const int m, vector<vector<char>>& maps)
{
	maps.resize(m);
	for (int i = 0; i < m; ++i)
	{
		string line;
		cin >> line;
		for (int j = 0; j < line.length(); ++j)
			maps[i].push_back(line[j]);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// white, blue순으로 pushback
	vector<int> answer(2, 0);
	int n, m;
	vector<vector<char>> maps;

	cin >> n >> m;
	makeMaps(m, maps);

	vector<vector<bool>> visited(m, vector<bool>(n, false));
	queue<Coordi> q;
	for (int i = 0; i < maps.size(); ++i)
	{
		for (int j = 0; j < maps[i].size(); ++j)
		{
			if (!visited[i][j])
			{
				char color;
				if (maps[i][j] == 'W')
					color = 'W';
				else
					color = 'B';

				q.push({ i, j });
				visited[i][j] = true;
				int cnt = 0;
				while (!q.empty())
				{
					Coordi current = q.front();
					q.pop();

					for (int k = 0; k < 4; ++k)
					{
						Coordi next = { current.y + dy[k], current.x + dx[k] };
						if (!next.bIsValid(n, m)) continue;
						if(!visited[next.y][next.x] && maps[next.y][next.x] == color)
						{
							q.push(next);
							visited[next.y][next.x] = true;
							++cnt;
						}
					}
				}
				if (color == 'W')
					answer[0] += (cnt + 1) * (cnt + 1);
				else
					answer[1] += (cnt + 1) * (cnt + 1);
			}
		}
	}
	for (int val : answer)
		cout << val << " ";

	return 0;
}