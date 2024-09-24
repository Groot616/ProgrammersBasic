#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	double n, m;
	cin >> n >> m;

	cout << ceil(n * m / (5 * 4840)) << '\n';

	return 0;
}