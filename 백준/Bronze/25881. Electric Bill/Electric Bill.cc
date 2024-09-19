#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int basePrice, addPrice;
	int test;

	cin >> basePrice >> addPrice;
	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp <= 1000)
			cout << tmp << " " << basePrice * tmp << '\n';
		else
			cout << tmp << " " << 1000 * basePrice + addPrice * (tmp - 1000) << '\n';
	}
	

	return 0;
}