#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;

	cin >> n;
	vector<vector<int>> element(3, vector<int>(n));
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int tmp;
			cin >> tmp;
			element[i][j] = tmp;
		}
	}

	int cnt = 0;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (element[i][j] == 7)
			{
				++cnt;
				break;
			}
		}
	}
	if (cnt == 3)
		cout << "777" << "\n";
	else
		cout << 0 << "\n";

	return 0;
}