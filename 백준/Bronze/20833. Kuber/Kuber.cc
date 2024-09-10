#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int answer = 0;
	int n;

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		answer += pow(i, 3);
	}
	cout << fixed;
	cout.precision(0);
	cout << answer << "\n";

	return 0;
}