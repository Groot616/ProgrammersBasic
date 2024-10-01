#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<int> hit;
	int realHit = 0;
	int recommandHit = 0;

	cin >> n;
	hit.resize(n);
	for (auto& x : hit) cin >> x;

	for (int i = 0; i < hit.size(); ++i)
	{
		if (i % 2 == 0)
			recommandHit += 2;
		else
			recommandHit += 3;

		if (hit[i] <= 7)
			realHit += hit[i];
		else
			realHit += 7;
	}
	cout << realHit - recommandHit << '\n';

	return 0;
}