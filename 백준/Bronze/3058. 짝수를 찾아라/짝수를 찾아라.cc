#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	vector<vector<int>> arr(n, vector<int>(7));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < arr[0].size(); ++j)
		{
			int tmp;
			cin >> tmp;
			arr[i][j] = tmp;
		}
		
		sort(arr[i].begin(), arr[i].end());
		int sum = 0;
		int minEven = -1;
		for (int j = 0; j < arr[0].size(); ++j)
		{
			if (arr[i][j] % 2 == 0)
				sum += arr[i][j];
		}
		for (int j = 0; j < arr[0].size(); ++j)
		{
			if (arr[i][j] % 2 == 0)
			{
				minEven = arr[i][j];
				break;
			}
		}

		cout << sum << " " << minEven << "\n";
		
		sum = 0;
		minEven = -1;
	}
	
	return 0;
}