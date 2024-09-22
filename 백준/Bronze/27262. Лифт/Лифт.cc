#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k, a, b;

	cin >> n >> k >> a >> b;
	cout << b * (k + n - 2) << " " << a * (n - 1) << '\n'; 

	return 0;
}