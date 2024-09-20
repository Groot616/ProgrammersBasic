#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long answer = 0;
	int test;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		long long n1, n2;
		cin >> n1 >> n2;
		answer = n1 * n2 / gcd(n1, n2);
		cout << answer << '\n';
	}

	return 0;
}