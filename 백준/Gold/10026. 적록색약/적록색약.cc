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

	bool bIsValid(const int& n)
	{
		return x >= 0 && x < n && y >= 0 && y < n;
	}
};

void makeRGBlind(vector<vector<vector<char>>>& map, const int& n)
{
	map.resize(2, vector < vector<char>>(n, vector<char>(n)));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			char info;
			cin >> info;
			if (info == 'R')
			{
				map[0][i][j] = info;
				map[1][i][j] = info;
			}
			else if (info == 'G')
			{
				map[0][i][j] = info;
				map[1][i][j] = 'R';
			}
			else
			{
				map[0][i][j] = info;
				map[1][i][j] = info;
			}
		}
	}
}

int getArea(const int& startZ, const int& n, vector<vector<vector<char>>>& map)
{
	int retVal = 0;
	vector<char> rgb = { 'R', 'G', 'B' };
	vector<vector<bool>> visited(n, vector<bool>(n, false));
	queue<Coordi> q;

	for (int i = 0; i < rgb.size(); ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k <n; ++k)
			{
				if (map[startZ][j][k] == rgb[i] && !visited[j][k])
				{
					q.push({ j, k });
					map[startZ][j][k] = 'C';
					visited[j][k] = true;

					while (!q.empty())
					{
						Coordi current = q.front();
						q.pop();

						for (int l = 0; l < 4; ++l)
						{
							Coordi next = { current.y + dy[l], current.x + dx[l] };
							if (next.bIsValid(n) && !visited[next.y][next.x] && map[startZ][next.y][next.x] != 'C' && map[startZ][next.y][next.x] == rgb[i])
							{
								q.push({ next.y, next.x });
								visited[next.y][next.x] = true;
								map[startZ][next.y][next.x] = 'C';
							}
						}
					}
					++retVal;
				}
			}
		}
	}
	return retVal;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	// z = 0일때 적록색약x, z = 1일때 적록색약o
	vector<vector<vector<char>>> map;

	cin >> n;
	makeRGBlind(map, n);

	cout << getArea(0, n, map) << " " << getArea(1, n, map) << '\n';

	return 0;
}