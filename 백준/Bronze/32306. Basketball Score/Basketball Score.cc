#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int t11, t12, t13;
	int t21, t22, t23;
	int scoreT1, scoreT2;

	cin >> t11 >> t12 >> t13;
	cin >> t21 >> t22 >> t23;
	scoreT1 = t11 + 2 * t12 + 3 * t13;
	scoreT2 = t21 + 2 * t22 + 3 * t23;

	if (scoreT1 > scoreT2)
		answer = 1;
	else if (scoreT1 == scoreT2)
		answer = 0;
	else
		answer = 2;
	cout << answer << '\n';

	return 0;
}