#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int height, n;

	cin >> height >> n;
	for (int i = 0; i < n; ++i)
	{
		if (height % 2 == 0)
			height = (height / 2) ^ 6;
		else
			height = (2 * height) ^ 6;
	}
	cout << height << '\n';

	return 0;
}