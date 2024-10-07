#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<double> buy(3);
	vector<double> cost(3);

	for (auto& x : buy) cin >> x;
	for (auto& x : cost) cin >> x;

	double minRatio = min({ buy[0] / cost[0], buy[1] / cost[1], buy[2] / cost[2] });
	for (int i = 0; i < 3; ++i)
		buy[i] -= cost[i] * minRatio;

	cout << fixed << setprecision(6);
	for (int i = 0; i < 3; ++i) {
		if (fabs(buy[i] - round(buy[i])) < 1e-6)
			cout << (int)round(buy[i]) << " ";
		else
			cout << fixed << setprecision(6) << buy[i] << " ";
	}
	cout << '\n';

	return 0;
}