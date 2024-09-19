#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;
	vector<vector<char>> arr1(n, vector<char>(m));
	vector<vector<char>> arr2(n, vector<char>(m));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char tmp;
			cin >> tmp;
			if (tmp == 'B')
				arr1[i][j] = 'W';
			else
				arr1[i][j] = 'B';
		}
	}
	/*cout << '\n';*/
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char tmp;
			cin >> tmp;
			arr2[i][j] = tmp;
		}
	}

	int cntCheck = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (arr1[i][j] != arr2[i][j])
				++cntCheck;
		}
	}
	cout << cntCheck << '\n';
	
	return 0;
}