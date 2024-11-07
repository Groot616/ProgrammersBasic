#include <iostream>
#include <vector>

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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int test;

	cin >> test;
	for (int k = 0; k < test; ++k)
	{
		int answer = -1;
		int m, n, x, y;
		int dDay;

		cin >> m >> n >> x >> y;
		dDay = lcm(m, n);

		vector<int> checkFirst;
		int firstCheck = m + x;
		for (int i = x; i <= dDay; i += m)
			checkFirst.push_back(i);

		for (int i = 0; i < checkFirst.size(); ++i)
		{
			if ((checkFirst[i] - 1) % n + 1 == y)
			{
				answer = checkFirst[i];
				break;
			}
		}
		cout << answer << '\n';
	}

	return 0;
}