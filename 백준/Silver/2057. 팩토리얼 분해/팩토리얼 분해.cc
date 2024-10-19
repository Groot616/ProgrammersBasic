#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector<unsigned long long> factorial(20, 0);

long long getFactorial(int n)
{
	if (n == 0 || n == 1) return 1;

	if (factorial[n] != 0)
		return factorial[n];

	factorial[n] = n * getFactorial(n - 1);
	return factorial[n];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string answer = "NO";
	unsigned long long n;
	factorial[0] = 1;
	factorial[1] = 1;
	getFactorial(19);

	cin >> n;
	if (n == 0)
		answer = "NO";
	else if (n > accumulate(factorial.begin(), factorial.end(), 0LL))
		answer = "NO";
	else
	{
		for (int i = factorial.size() - 1; i >= 1; --i)
		{
			bool bFind = false;
			long long sum = factorial[i];
			if (sum > n)
				continue;
			else if (sum == n)
				answer = "YES";
			else
			{
				for (int j = i - 1; j >= 0; --j)
				{
					if (sum + factorial[j] == n)
					{
						answer = "YES";
						cout << answer << '\n';
						return 0;
					}
					else if (sum + factorial[j] > n)
						continue;
					else
						sum += factorial[j];
				}
			}
		}
	}
	cout << answer << '\n';

	return 0;
}