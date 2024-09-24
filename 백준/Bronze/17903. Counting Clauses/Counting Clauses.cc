#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int i = 0; i < m; ++i)
		{
			int tmp;
			cin >> tmp;
		}
	}
	if (n >= 8)
		cout << "satisfactory" << '\n';
	else
		cout << "unsatisfactory" << '\n';

	return 0;
}