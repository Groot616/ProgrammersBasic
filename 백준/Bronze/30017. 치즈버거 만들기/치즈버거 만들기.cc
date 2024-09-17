#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	// 패티 = 치즈 + 1인 경우에만 햄버거 완성
	int answer = 0;
	int patty, cheese;

	cin >> patty >> cheese;
	if (patty <= cheese)
		answer = patty + patty - 1;
	else
		answer = cheese + cheese + 1;
	cout << answer << '\n';

	return 0;
}