#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, w, h;

	cin >> t >> w >> h;
	for (int i = 0; i < t; ++i)
	{
		vector<vector<char>> graph(w, vector<char>(h));
		for (int j = 0; j < w; ++j)
		{
			for (int k = 0; k < h; ++k)
			{
				char tmp;
				cin >> tmp;
				graph[j][k] = tmp;
			}
		}

		int minY = h + 999;
		int maxY = 0;
		for (int j = 0; j < h; ++j)
		{
			for (int k = w - 1; k >= 0; --k)
			{
				if (graph[k][j] == '#' && w - k > maxY)
				{
					maxY = w - k;
					if (minY == h + 999)
						minY = w - k;
				}
				else if (graph[k][j] == '#' && w - k < minY)
					minY = w - k;
			}
		}
		cout << maxY - minY << '\n';
		graph.clear();
	}

	return 0;
}