#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	double area;

	cin >> area;
	double r = sqrt(area / 3.141592653589);
	double width = 2 * r + 2;
	cout << fixed;
	cout.precision(10);
	cout << pow(width, 2) << '\n';

	return 0;
}