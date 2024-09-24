#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, price;
	vector<int> total;
	int sum = 0;

	cin >> n >> price;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		total.push_back(tmp);
	}

	sum = accumulate(total.begin(), total.end(), 0);
	for (int i = 0; i < total.size(); ++i)
	{
		cout << price / sum * total[i];
		if (i != total.size() - 1)
			cout << '\n';
	}

	
	return 0;
}