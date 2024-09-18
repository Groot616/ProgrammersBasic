#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> n;
		for (int j = 0; j < n; ++j)
		{
			int n1, n2;
			cin >> n1 >> n2;
			cout << n1 + n2 << " " << n1 * n2 << '\n';
		}
	}

	return 0;
}