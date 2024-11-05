#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void makeTotalMoney(vector<int>& totalMoney, const int n)
{
	totalMoney.resize(n);
	for (auto& x : totalMoney) cin >> x;
	sort(totalMoney.rbegin(), totalMoney.rend());
}

int getTotalCnt(const vector<int> totalMoney, int money)
{
	int retVal = 0;
	for (auto &value : totalMoney)
	{
		if (value > money) continue;
		else
		{
			retVal += money / value;
			money %= value;
		}
	}
	return retVal;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int answer = 0;
	int n, money;
	vector<int> totalMoney;

	cin >> n >> money;
	makeTotalMoney(totalMoney, n);
	answer = getTotalCnt(totalMoney, money);

	cout << answer << '\n';

	return 0;
}