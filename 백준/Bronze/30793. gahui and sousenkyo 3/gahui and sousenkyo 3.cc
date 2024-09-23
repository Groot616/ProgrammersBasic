#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// 테스트케이스 n 입력, 0입력시 종료
	// n만큼 숫자를 입력받으면 뒤집어서 출력하고 추가로 0출력
	float n, m;

	cin >> n >> m;
	if (n < 0.2 * m)
		cout << "weak" << '\n';
	else if (n >= 0.2 * m && n < 0.4 * m)
		cout << "normal" << '\n';
	else if (n >= 0.4 * m && n < 0.6 * m)
		cout << "strong" << '\n';
	else
		cout << "very strong" << '\n';

	return 0;
}