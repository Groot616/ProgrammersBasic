#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double area;

	cin >> area;
	// a^2sin60 / 2 = area / 6
	// a^2 = 2 * area / (6 * sin60)
	// a = sqrt(2 * area / (6 * sin60))
	cout << fixed;
	cout.precision(8);
	cout << 6 * sqrt(2 * area / (6 * sin(60 * PI / 180))) << '\n';

	return 0;
}