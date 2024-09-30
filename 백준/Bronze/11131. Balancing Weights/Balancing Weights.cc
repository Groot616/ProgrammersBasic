#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int t;
		int sum = 0;
		cin >> t;
		for (int j = 0; j < t; ++j)
		{
			int tmp;
			cin >> tmp;
			sum += tmp;
		}
		if (sum < 0)
			cout << "Left" << '\n';
		else if (sum > 0)
			cout << "Right" << '\n';
		else
			cout << "Equilibrium" << '\n';
	}

	return 0;
}