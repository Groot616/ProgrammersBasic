#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int cube;
	double sum = 0;

	cin >> cube;
	for (int i = 0; i < cube; ++i)
	{
		double n;
		cin >> n;
		sum += pow(n, 3);
	}
	cout << fixed;
	cout.precision(8);
	cout << cbrt(sum) << '\n';

	return 0;
}