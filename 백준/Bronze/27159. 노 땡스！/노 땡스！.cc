#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int n;
	vector<int> arr;
	vector<int> startNum;

	cin >> n;
	arr.resize(n);
	for (auto& x : arr) cin >> x;
	if (arr.size() == 1)
		cout << arr[0] << '\n';
	else if (arr.size() == 2 && arr[1] - arr[0] == 1)
		cout << arr[0] << '\n';
	else if (arr.size() == 2 && arr[1] - arr[0] != 1)
		cout << arr[0] + arr[1] << '\n';
	else
	{
		for (int i = 0; i < arr.size() - 1; ++i)
		{
			if (arr[i + 1] - arr[i] == 1)
				startNum.push_back(arr[i]);
			else if (arr[i + 1] - arr[i] != 1 && arr[i] - arr[i - 1] != 1 && startNum.empty())
				answer += arr[i];
			else
			{
				answer += startNum[0];
				startNum.clear();
			}
		}
		if (!startNum.empty())
			answer += startNum[0];
		if (arr[arr.size() - 1] - arr[arr.size() - 2] != 1)
			answer += arr[arr.size() - 1];
		cout << answer << '\n';
	}
	
	return 0;
}