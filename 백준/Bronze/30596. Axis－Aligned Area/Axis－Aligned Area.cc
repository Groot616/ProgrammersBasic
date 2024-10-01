#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d;
	vector<int> length;

	length.resize(4);
	for (auto& x : length) cin >> x;
	sort(length.rbegin(), length.rend());
	cout << length[1] * length[3] << '\n';

	return 0;
}