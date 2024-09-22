#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// n영수증 a루블
	// 각 영수증의 구매비용
	int answer = 0;
	int n, a;

	cin >> n >> a;
	vector<int> money;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		money.push_back(tmp);
	}
	for (int i = 0; i < n; ++i)
	{
		if (money[i] >= a)
			answer += money[i] / a;
	}
	cout << answer << '\n';

	return 0;
}