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

	cin >> n;
	arr.resize(n);
	for (auto& x : arr) cin >> x;

	int min = arr[0];
	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] > min)
			answer += arr[i] - min;
		else
			min = arr[i];
	}
	cout << answer << '\n';

	return 0;
}