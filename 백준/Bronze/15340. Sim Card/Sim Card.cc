#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<pair<int, int>> ParsPrice = { {30, 40}, {35, 30}, {40, 20} };

	while (true)
	{
		int call, data;
		vector<int> price;

		cin >> call >> data;
		if (call == 0 && data == 0)
			break;

		for (int i = 0; i < ParsPrice.size(); ++i)
			price.push_back(call * ParsPrice[i].first + data * ParsPrice[i].second);
		cout << *min_element(price.begin(), price.end()) << '\n';

		price.clear();
	}

	return 0;
}