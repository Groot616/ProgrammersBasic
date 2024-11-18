#include <iostream>
#include <vector>
#include <tuple>
#include <queue>

using namespace std;

const vector<int> dx = { 0, 0, 1, -1, 0, 0 };
const vector<int> dy = { 1, -1, 0, 0, 0, 0 };
const vector<int> dz = { 0, 0, 0, 0, 1, -1 };

struct Coordi
{
	int z, y, x;

	Coordi(int z, int y, int x) : z(z), y(y), x(x) {}

	bool bIsValid(const int& width, const int& height, const int& depth)
	{
		return x >= 0 && x < width && y >= 0 && y < height && z >= 0 && z < depth;
	}
};

vector<tuple<int, int, int>> makeFarm(vector<vector<vector<int>>>& farm, const int &z, const int &y, const int &x, bool &bFull)
{
	vector<tuple<int, int, int>> retVec;
	farm.resize(z, vector<vector<int>>(y, vector<int>(x)));
	for (int i = 0; i < z; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
			for(int k = 0; k < x ; ++k)
			{
				int info;
				cin >> info;
				if (info == 1)
					retVec.emplace_back(i, j, k);
				if (info == 0)
					bFull = false;
				farm[i][j][k] = info;
			}
		}
	}
	return retVec;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int answer = 0;
	int x, y, z;
	bool bFull = true;
	vector<vector<vector<int>>> farm;
	vector<tuple<int, int, int>> tomatoPos;

	cin >> x >> y >> z;
	tomatoPos = makeFarm(farm, z, y, x, bFull);
	if (bFull)
	{
		cout << answer << '\n';
		return 0;
	}

	vector<vector<vector<bool>>> visited(z, vector<vector<bool>>(y, vector<bool>(x)));
	queue<Coordi> q;
	for (int i = 0; i < tomatoPos.size(); ++i)
	{
		visited[get<0>(tomatoPos[i])][get<1>(tomatoPos[i])][get<2>(tomatoPos[i])] = true;
		q.push({ get<0>(tomatoPos[i]), get<1>(tomatoPos[i]), get<2>(tomatoPos[i]) });
	}

	while (!q.empty())
	{
		int qSize = q.size();
		for (int j = 0; j < qSize; ++j)
		{
			Coordi current = q.front();
			q.pop();
			for (int i = 0; i < 6; ++i)
			{
				Coordi next = { current.z + dz[i], current.y + dy[i], current.x + dx[i] };
				if (next.bIsValid(x, y, z) && !visited[next.z][next.y][next.x] && farm[next.z][next.y][next.x] != -1)
				{
					q.push({ next.z, next.y, next.x });
					visited[next.z][next.y][next.x] = true;
					farm[next.z][next.y][next.x] = 1;
				}
			}
		}
		++answer;
	}
	for (int i = 0; i < z; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
			for (int k = 0; k < x; ++k)
			{
				if (!visited[i][j][k] && farm[i][j][k] == 0)
				{
					answer = -1;
					cout << answer << '\n';
					return 0;
				}
			}
		}
	}
	cout << answer - 1 << '\n';

	return 0;
}