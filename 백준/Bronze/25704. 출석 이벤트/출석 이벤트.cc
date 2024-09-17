#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int coupon;
	int price;

	cin >> coupon;
	cin >> price;

	if (coupon < 5)
		answer = price;
	else if (coupon < 10)
		answer = price - 500;
	else if (coupon < 15)
		answer = min(price - price / 10, price - 500);
	else if (coupon < 20)
		answer = min({ price - price / 10, price - 500, price - 2000 });
	else
		answer = min({ price - price / 4, price - price / 10, price - 2000, price - 500 });

	if (answer < 0) answer = 0;
	cout << answer << '\n';

	return 0;
}