#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	set<int> priceAll;
	vector<int> price;
	int n, x;

	cin >> n >> x;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		price.push_back(tmp);
	}

	for (int i = 1; i < n; ++i)
		priceAll.insert(x * (price[i - 1] + price[i]));

	cout << *priceAll.begin() << '\n';

	return 0;
}