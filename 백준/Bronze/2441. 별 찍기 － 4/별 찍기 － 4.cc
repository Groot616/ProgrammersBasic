#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int k = 0 ; k < i; ++k)
			cout << " ";
		for (int j = n - i; j > 0; --j)
			cout << "*";
		cout << "\n";
	}

	return 0;
}