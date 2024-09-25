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
		int idx, candle;
		cin >> idx >> candle;
		cout << idx << " " << candle * (candle + 1) / 2 + candle;
		if (i != n - 1)
			cout << '\n';
	}


	return 0;
}