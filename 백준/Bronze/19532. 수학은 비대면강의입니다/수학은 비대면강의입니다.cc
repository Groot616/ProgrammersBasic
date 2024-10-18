#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// ax + by = c
	// dx + ey = f
	// (c - f) - x * (a - d)) / (b - e) = y
	double a, b, c, d, e, f;
	double x;
	double y;

	cin >> a >> b >> c >> d >> e >> f;

	if (a == 0 || d == 0)
	{
		if (a == 0)
		{
			y = c / b;
			x = (f - (e * y)) / d;
		}
		else
		{
			y = f / e;
			x = (c - (b * y)) / a;
		}
	}
	else if (b == 0 || e == 0)
	{
		if (b == 0)
		{
			x = c / a;
			y = (f - (d * x)) / e;
		}
		else
		{
			x = f / d;
			y = (c - (a * x)) / b;
		}
	}
	else
	{
		double sameY = lcm(abs(b), abs(e));
		double tmpA = a * (sameY / b); double tmpC = c * (sameY / b);
		double tmpD = d * (sameY / e); double tmpF = f * (sameY / e);
		x = (tmpC - tmpF) / (tmpA - tmpD);
		y = ((c - f) - x * (a - d)) / (b - e);
	}
	cout << x << " " << y << '\n';


	return 0;
}
