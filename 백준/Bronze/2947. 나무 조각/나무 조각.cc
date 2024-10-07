#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> arr;
	vector<int> sortedArr;

	arr.resize(5);
	for (auto& x : arr) cin >> x;
	sortedArr = arr;
	sort(sortedArr.begin(), sortedArr.end());

	while(true)
	{
		for (int i = 1; i < arr.size(); ++i)
		{
			if (arr[i - 1] > arr[i])
			{
				swap(arr[i - 1], arr[i]);
				for (const auto& e : arr)
					cout << e << " ";
				cout << '\n';
			}
		}
		if (arr == sortedArr)
			break;
	}

	return 0;
}