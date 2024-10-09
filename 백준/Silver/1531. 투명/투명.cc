#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int n, m;
	vector<vector<int>> picture(100, vector<int>(100, 0));

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		x1--; x2--; y1--; y2--;
		for (int j = x1; j <= x2; ++j)
		{
			for (int k = y1; k <= y2; ++k)
				picture[j][k] += 1;
		}
	}
	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			if (picture[i][j] > m)
				answer += 1;
		}
	}
	cout << answer << '\n';

	return 0;
}