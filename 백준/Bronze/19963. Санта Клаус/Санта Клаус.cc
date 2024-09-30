#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, k;
	vector<int> childNum;
	vector<int> childNum1;
	vector<int> childNum2;

	cin >> n >> m >> k;
	childNum.resize(n);
	childNum1.resize(m);
	childNum2.resize(k);
	for (auto& x : childNum1) cin >> x;
	for (auto& x : childNum2) cin >> x;
	for (int i = 0; i < childNum1.size(); ++i)
		childNum[childNum1[i] - 1] = childNum1[i];
	for (int i = 0; i < childNum2.size(); ++i)
		childNum[childNum2[i] - 1] = childNum2[i];
	
	cout << n - m - k << '\n';
	for (int i = 0; i < childNum.size(); ++i)
	{
		if (childNum[i] == 0)
			cout << i + 1 << " ";
	}

	return 0;
}