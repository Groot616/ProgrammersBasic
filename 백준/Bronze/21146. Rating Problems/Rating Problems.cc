#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	float sum = 0;

	cin >> n >> k;
	for (int i = 0; i < k; ++i)
	{
		float score;
		cin >> score;
		sum += score;
	}
	cout << (sum - 3 * (n - k)) / n << " " << (sum + 3 * (n - k)) / n << '\n';

	return 0;
}