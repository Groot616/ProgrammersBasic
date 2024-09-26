#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int n;
	vector<char> arr1;
	vector<char> arr2;

	cin >> n;
	arr1.resize(n);
	arr2.resize(n);
	for (auto& x : arr1) cin >> x;
	for (auto& x : arr2) cin >> x;
	for (int i = 0; i < n; ++i)
	{
		if (arr1[i] == arr2[i])
			answer += 1;
	}
	cout << answer << '\n';

	return 0;
}