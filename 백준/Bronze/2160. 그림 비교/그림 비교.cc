#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	vector<vector<string>> picture(n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			string tmp;
			cin >> tmp;
			picture[i].push_back(tmp);
		}
	}
	
	int answer1;
	int answer2;
	int minDiff = 999;
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			int cnt = 0;
			for (int l = 0; l < 5; ++l)
			{
				for (int k = 0; k < 7; ++k)
				{
					if (picture[i][l][k] != picture[j][l][k])
						++cnt;
				}
			}
			if (cnt < minDiff)
			{
				minDiff = cnt;
				answer1 = i + 1;
				answer2 = j + 1;
			}
		}
		
	}
	cout << answer1 << '\n' << answer2 << '\n';

	return 0;
}