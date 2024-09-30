#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int sum;
	vector<int> bicycle1;
	vector<int> bicycle2;

	cin >> n;
	bicycle1.resize(n);
	bicycle2.resize(n);
	for (auto& x : bicycle1) cin >> x;
	for (auto& x : bicycle2) cin >> x;

	int min = 0;
	for (int i = 0; i < bicycle1.size(); ++i)
	{
		if (bicycle2[i] - bicycle1[i] < 0)
			min += bicycle2[i] - bicycle1[i];
	}
	cout << abs(min) << '\n';
	


	return 0;
}