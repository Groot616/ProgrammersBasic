#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// a1, a0가 주어짐
	// c가 주어짐
	// n0가 주어짐
	// f(n) = a1n + a0
	// 모든 n >= n0에 대해 c x g(n) <= f(n)인 양의 상수 c와 n0가 존재함을 만족하면 1 아니면 0
	int answer = 0;
	int a1, a0;
	int c;
	int n0;

	cin >> a1 >> a0;
	cin >> c;
	cin >> n0;

	for (int n = n0; n <= 100; ++n)
	{
		if (c * n <= a1 * n + a0)
			answer = 1;
		else
		{
			answer = 0;
			break;
		}
	}
	cout << answer << '\n';


	return 0;
}