#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		int myGCD;

		cin >> a >> b;
		myGCD = gcd(a, b);
		cout << a / myGCD * b / myGCD * myGCD << '\n';
	}

	return 0;
}