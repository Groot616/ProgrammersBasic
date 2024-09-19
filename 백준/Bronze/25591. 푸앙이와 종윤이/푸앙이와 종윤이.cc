#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n1, n2;
	int a, b, c, d;
	int q = 0;
	int r = 0;
	cin >> n1 >> n2;

	a = 100 - n1;
	b = 100 - n2;
	c = 100 - (a + b);
	d = a * b;
	if (d >= 100)
		q = d / 100;
	r = d % 100;
	cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << '\n';
	cout << c + q << " " << r << '\n';
	

	return 0;
}