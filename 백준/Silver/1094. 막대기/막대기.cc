#include <iostream>

using namespace std;

int changeBin(int n)
{
	int retVal = 0;
	while (n != 0)
	{
		if (n % 2 == 1)
			++retVal;
		n /= 2;
	}
	return retVal;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;

	cin >> n;
	cout << changeBin(n) << '\n';

	return 0;
}