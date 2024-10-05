#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int answer = 0;
		int n, length;
		cin >> n >> length;
		for (int j = 0; j < n; ++j)
		{
			float v, fewel, fewelRate;
			cin >> v >> fewel >> fewelRate;
			if (v * fewel / fewelRate >= length)
				answer += 1;
		}
		cout << answer << '\n';
	}
	
	return 0;
}