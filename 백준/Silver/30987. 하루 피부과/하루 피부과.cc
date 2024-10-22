#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int integral(vector<int> equation, int x1, int x2)
{
	int x3front = equation[0] / 3;
	int x2front = equation[1] / 2;


	return (equation[0] / 3) * (pow(x2, 3) - pow(x1, 3)) +
		(equation[1] / 2) * (pow(x2, 2) - pow(x1, 2)) +
		equation[2] * (x2 - x1);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// integal x1 to x2(f(x) - g(x)), f(x) = ax^2 + bx + c, g(x) = dx + e
	int answer = 0;
	int x1, x2;
	int a, b, c, d, e;
	vector<int> equation(3);

	cin >> x1 >> x2;
	cin >> a >> b >> c >> d >> e;
	equation[0] = a;
	equation[1] = b - d;
	equation[2] = c - e;
	answer = integral(equation, x1, x2);
	cout << answer << '\n';

	return 0;
}