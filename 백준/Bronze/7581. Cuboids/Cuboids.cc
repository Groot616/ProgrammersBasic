#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (true)
	{
		int n1, n2, n3, n4;

		cin >> n1 >> n2 >> n3 >> n4;
		if (n1 == 0 && n2 == 0 && n3 == 0 && n4 == 0)
			break;

		if (n1 == 0)
			n1 = n4 / n2 / n3;
		else if (n2 == 0)
			n2 = n4 / n1 / n3;
		else if (n3 == 0)
			n3 = n4 / n1 / n2;
		else
			n4 = n1 * n2 * n3;
		cout << n1 << " " << n2 << " " << n3 << " " << n4 << '\n';
	}

	return 0;
}