#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// h : 빨랫줄의 높이
	// l : 빨랫줄의 길이
	// a : 망토 가로
	// b : 망토 세로
	float h, l, a, b;
	
	cin >> h >> l >> a >> b;
	bool case1 = (a / 2.0 <= h && b <= l);
	bool case2 = (b / 2.0 <= h && a <= l);

	if(case1 || case2)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';

	return 0;
}