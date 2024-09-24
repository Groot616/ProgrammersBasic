#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n;

	cin >> n;

	cout << fixed;
	cout.precision(9);
	cout << 2 * sqrt(n / 3.1415926535) * 3.1415926535 << '\n';

	return 0;
}