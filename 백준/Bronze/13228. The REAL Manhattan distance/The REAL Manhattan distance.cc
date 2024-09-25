#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int p1x, p1y, p1z;
		int p2x, p2y, p2z;
		cin >> p1x >> p1y >> p1z >> p2x >> p2y >> p2z;
		cout << abs(p1x - p2x) + abs(p1y - p2y) + p1z + p2z << '\n';
	}

	return 0;
}