#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// n개의 다크초콜릿, m개의 화이트초콜릿
	// 번갈아가며 먹을 때 최대로 먹을 수 있는 초콜릿의 수는
	int answer = 0;
	int n, m;

	cin >> n >> m;
	if (n == m)
		answer = n + m;
	else if (n > m)
		answer = 2 * m + 1;
	else
		answer = 2 * n + 1;
	cout << answer << '\n';

	return 0;
}