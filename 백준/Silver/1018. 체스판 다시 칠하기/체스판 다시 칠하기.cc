#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<vector<char>> board1 = {
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
};

vector<vector<char>> board2 = {
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	unordered_set<int> need;

	cin >> n >> m;
	vector<vector<char>> myBoard(n, vector<char>(m));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char tmp;
			cin >> tmp;
			myBoard[i][j] = tmp;
		}
	}

	int cnt1 = 0;
	int cnt2 = 0;
	int k = 0;
	int l = 0;
	while (true)
	{
		for (int i = 0 + k; i < 8 + k; ++i)
		{
			for (int j = 0 + l; j < 8 + l; ++j)
			{
				if (myBoard[i][j] != board1[i - k][j - l])
					cnt1 += 1;
				if (myBoard[i][j] != board2[i - k][j - l])
					cnt2 += 1;
			}
		}
		need.insert(min(cnt1, cnt2));
		cnt1 = 0;
		cnt2 = 0;
		++l;
		if (l % (m - 7) == 0)
		{
			++k;
			l = 0;
		}
		if (k == n - 7 && l == 0)
			break;
	}
	cout << *min_element(need.begin(), need.end()) << '\n';

	return 0;
}