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
	cout.precision(8);
	cout << 4 * sqrt(n) << '\n';


	return 0;
}