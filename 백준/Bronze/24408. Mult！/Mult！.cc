#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int findNum;
	vector<int> arr;

	cin >> n;
	arr.resize(n);
	for (auto& x : arr) cin >> x;
	findNum = arr[0];
	for (int i = 1; i < arr.size(); ++i)
	{
		if (arr[i] % findNum == 0)
		{
			cout << arr[i] << '\n';
			findNum = arr[i + 1];
			++i;
		}
	}

	return 0;
}