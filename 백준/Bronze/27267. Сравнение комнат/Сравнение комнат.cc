#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 마샤 방의 넓이 = a * b
	// 페트야 방의 넓이 = c * d
	// 누가 더 큰자 출력(M or P or E)
	char answer;
	int a, b, c, d;

	cin >> a >> b >> c >> d;
	if (a * b < c * d)
		answer = 'P';
	else if (a * b > c * d)
		answer = 'M';
	else
		answer = 'E';
	cout << answer << '\n';

	return 0;
}