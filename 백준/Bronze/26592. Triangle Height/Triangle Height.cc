#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		float area, width;
		cin >> area >> width;
		cout << fixed;
		cout.precision(2);
		cout << "The height of the triangle is " << 2 * area / width << " units";
		if (i != n - 1)
			cout << '\n';
	}

	return 0;
}