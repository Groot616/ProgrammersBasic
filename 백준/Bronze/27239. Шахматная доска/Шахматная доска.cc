#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	
	cin >> n;
	int row, col;
	for (int i = 1; i <= 8; ++i)
	{
		if (n >= 1 + 8 * (i - 1) && n <= 8 * i)
			col = i;
	}
	row = n % 8;
	
	char alpha;
	if (row == 0)
		alpha = 'h';
	else
		alpha = 96 + row;
	cout << alpha << col << '\n';



	return 0;
}