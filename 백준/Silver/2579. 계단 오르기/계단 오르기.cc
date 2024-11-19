#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;

	cin >> n;
	vector<int> stairs(n);
	vector<int> scores(n, 0);
	for (auto& x : stairs) cin >> x;
	
	scores[0] = stairs[0];
	scores[1] = stairs[0] + stairs[1];
	if (n > 2)
		scores[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2]);
	for (int i = 3; i < n; ++i)
		scores[i] = max(stairs[i] + scores[i - 2], stairs[i] + stairs[i - 1] + scores[i - 3]);
	cout << scores[n - 1] << '\n';

	return 0;
}