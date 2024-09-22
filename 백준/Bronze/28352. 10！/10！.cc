#include <iostream>
#include <string>
#include <cmath>

long long factorial(long long n)
{
	if (n == 1)
		return n * 1;
	else
		return n * factorial(n - 1);
}

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long second;
	
	cin >> second;
	cout << factorial(second) / 60 / 60 / 24 / 7 << '\n';

	return 0;
}