#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// C = 100 * (P - O) / O, CO = 100 * (P - O), CO = 100P - 100O, CO + 100O = 100P, O(C + 100) = 100P, O = 100P / (c + 100) 
	int n;
	double p, c;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> p >> c;
		cout << fixed;
		cout.precision(9);
		cout << (100 * p) / (c + 100) << '\n';
	}

	return 0;
}