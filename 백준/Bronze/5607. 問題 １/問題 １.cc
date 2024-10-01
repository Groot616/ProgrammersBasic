#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int aScore = 0;
	int bScore = 0;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
			aScore += a + b;
		else if (a < b)
			bScore += a + b;
		else
		{
			aScore += a;
			bScore += b;
		}
	}
	cout << aScore << " " << bScore << '\n';

	return 0;
}