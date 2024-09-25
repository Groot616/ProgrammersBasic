#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int k, n, m;
	vector<int> nArr;
	vector<int> mArr;

	cin >> k;
	cin >> n;
	nArr.resize(n);
	for (auto& x : nArr) cin >> x;
	cin >> m;
	mArr.resize(m);
	for (auto& x : mArr) cin >> x;
	for (int i = 0; i < nArr.size(); ++i)
	{
		int sum = 0;
		sum = k + nArr[i];
		for (int j = 0; j < mArr.size(); ++j)
		{
			if (sum == mArr[j])
				++answer;
		}
	}
	cout << answer << '\n';

	return 0;
}