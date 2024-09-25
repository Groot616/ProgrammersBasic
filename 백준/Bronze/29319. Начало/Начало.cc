#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<int> ring;
	
	cin >> n;
	ring.resize(n);
	for (auto& x : ring) cin >> x;
	sort(ring.rbegin(), ring.rend());
	cout << accumulate(ring.begin(), ring.end(), 0) - ring[0] << '\n';

	return 0;
}