#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int n;
	vector<int> forks;

	cin >> n;
	forks.resize(n);
	for (auto& x : forks) cin >> x;
	sort(forks.begin(), forks.end());
	answer = forks[0] + forks[1];
	cout << answer << '\n';

	return 0;
}