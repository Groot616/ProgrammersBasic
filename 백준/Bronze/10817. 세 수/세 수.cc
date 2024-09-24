#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n1, n2, n3;
	vector<int> arr;

	cin >> n1 >> n2 >> n3;
	arr.push_back(n1);
	arr.push_back(n2);
	arr.push_back(n3);
	sort(arr.begin(), arr.end());
	cout << arr[1] << '\n';

	return 0;
}