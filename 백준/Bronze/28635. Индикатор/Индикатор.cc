#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	// m = 카운트 a는 현재카운트, b는 목표카운트, 카운트가 10에 도달하면 1로 바뀜
	int answer = 0;
	int m, a, b;
	
	cin >> m >> a >> b;
	if (a == b)
		answer = 0;
	else if (a > b)
	{
		answer = m + b - a;
	}
	else
		answer = b - a;
	cout << answer << '\n';

	return 0;
}