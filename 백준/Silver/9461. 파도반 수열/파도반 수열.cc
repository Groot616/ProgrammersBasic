#include <iostream>
#include <vector>

using namespace std;

vector<long long> arr(101, 0);

long long fibonacci(long long n)
{
	if (n == 1 || n == 2 || n == 3) return arr[n];
	else
	{
		if (arr[n] != 0) return arr[n];
		else
		{
			arr[n] = fibonacci(n - 3) + fibonacci(n - 2);
			return arr[n];
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int test;
	arr[1] = arr[2] = arr[3] = 1;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		long long n;
		
		cin >> n;
		cout << fibonacci(n) << '\n';
	}

	return 0;
}