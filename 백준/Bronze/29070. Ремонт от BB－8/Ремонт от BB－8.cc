#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, w, h;
	int cnt1, cnt2;

	cin >> a >> b >> w >> h;
	w % a != 0 ? cnt1 = w / a + 1 : cnt1 = w / a;
	h % b != 0 ? cnt2 = h / b + 1 : cnt2 = h / b;
	cout << cnt1 * cnt2 << '\n';

	return 0;
}