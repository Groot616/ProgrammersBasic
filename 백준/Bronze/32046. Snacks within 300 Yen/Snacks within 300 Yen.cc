#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (true)
	{
		int test;
		int sum = 0;
		vector<int> price;

		cin >> test;
		if (test == 0)
			break;

		price.resize(test);
		for (auto& x : price) cin >> x;
		for (const auto& e : price)
		{
			if (sum + e <= 300)
				sum += e;
		}
		cout << sum << '\n';

		price.clear();
	}

	return 0;
}