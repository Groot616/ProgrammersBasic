#include <iostream>

using namespace std;

int main()
{
	int n = 0;

	int sum = 0;
	while (n != -1)
	{
		cin >> n;
		if (n == -1)
			break;
		else
			sum += n;
	}
	cout << sum << "\n";

	return 0;
}