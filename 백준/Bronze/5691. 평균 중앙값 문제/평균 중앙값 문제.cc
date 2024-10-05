#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n1, n2;

	while (true)
	{
		cin >> n1 >> n2;
		if (n1 == 0 && n2 == 0)
			break;

		// n1보다 작은 경우
		if (3 * n1 / 3 == n1)
			cout << 2 * n1 - n2 << '\n';
		// n2보다 큰 경우
		else
			cout << 2 * n2 - n1 << '\n';
	}

	return 0;
}