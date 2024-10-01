#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		float d, a, b, f;
		cin >> n >> d >> a >> b >> f;
		cout << fixed;
		cout.precision(6);
		cout << n << " " << d / (a + b) * f << '\n';
	}
	
	return 0;
}