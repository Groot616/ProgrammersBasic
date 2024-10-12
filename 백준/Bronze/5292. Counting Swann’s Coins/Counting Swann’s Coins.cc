#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		if (i % 3 == 0 && i % 15 != 0)
			cout << "Dead" << '\n';
		else if (i % 5 == 0 && i % 15 != 0)
			cout << "Man" << '\n';
		else if (i % 15 == 0)
			cout << "DeadMan" << '\n';
		else
			cout << i << " ";
	}

	return 0;
}