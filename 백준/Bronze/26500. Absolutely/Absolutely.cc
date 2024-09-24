#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		double point1, point2;
		cin >> point1 >> point2;
		cout << fixed << setprecision(1) << abs(point2 - point1) << '\n';
	}

	return 0;
}