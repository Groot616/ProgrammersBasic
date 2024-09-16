#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int min = 10001;
	int max = 0;

	cin >> n;
	vector<int> arr(10001, 0);
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		arr[tmp]++;
	}

	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i])
		{
			for (int j = arr[i]; j > 0; --j)
			{
				cout << i << "\n";
			}
		}
	}

	return 0;
}