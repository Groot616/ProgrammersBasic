#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 1/f = 1/p + 1/q
	// pq = fq + fp
	// f(p + q) = pq
	// f = pq/(p + q)
	int n;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		float f1, f2;
		cin >> f1 >> f2;
		cout << fixed;
		cout.precision(1);
		cout << "f = " << f1 * f2 / (f1 + f2) << '\n';
	}

	return 0;
}