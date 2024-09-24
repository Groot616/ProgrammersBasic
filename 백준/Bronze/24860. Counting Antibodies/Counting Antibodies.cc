#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long sum = 0;
	long long v_k, j_k, v_l, j_l, v_h, d_h, j_h;

	cin >> v_k >> j_k;
	cin >> v_l >> j_l;
	cin >> v_h >> d_h >> j_h;
	
	sum = ((v_k * j_k) + (v_l * j_l)) * (v_h * d_h * j_h);
	cout << sum << '\n';

	return 0;
}