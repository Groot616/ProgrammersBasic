#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, w, h;
	cin >> n >> w >> h;
	int minE = min(w, h);
	int maxE = max(w, h);
	int r = sqrt(pow(minE,2) + (pow(maxE, 2)));
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		if ((tmp >= minE && tmp <= maxE) || tmp <= r)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}