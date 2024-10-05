#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int card;
	vector<int> num;

	cin >> card;
	for (int i = 0; i < card; ++i)
	{
		int n;
		cin >> n;
		num.push_back(n);
	}
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size() - 1; ++i)
		answer += num[i];
	cout << answer << '\n';

	return 0;
}