#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int n, r;
	int choose1 = 0;
	int choose2 = 0;
	vector<int> money;

	cin >> n >> r;
	money.resize(n);
	for (auto& x : money) cin >> x;
	for (int i = 0; i < money.size(); ++i)
	{
		if (money[i] + r > 2 * money[i]) ++choose1;
		else if (money[i] + r < 2 * money[i]) ++choose2;
	}
	if (choose1 > choose2)
		answer = 1;
	else if (choose1 < choose2)
		answer = 2;
	else
		answer = 0;
	cout << answer << '\n';

	return 0;
}