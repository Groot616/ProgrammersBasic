#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int total = 0;
	vector<int> passedTime;

	cin >> n;
	for (int i = 0; i < n / 2; ++i)
	{
		passedTime.resize(2);
		for (auto& x : passedTime) cin >> x;
		total += passedTime[1] - passedTime[0];
		passedTime.clear();

	}
	if (n % 2 == 1)
	{
		cout << "still running" << '\n';
		return 0;
	}
	else
		cout << total << '\n';

	return 0;
}