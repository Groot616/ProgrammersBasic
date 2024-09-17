#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	vector<int> vecNums;
	vector<int> vecSums;

	for (int i = 0; i < 10; ++i)
	{
		int tmp;
		cin >> tmp;
		vecNums.push_back(tmp);
	}

	int sum = accumulate(vecNums.begin(), vecNums.end(), 0);
	for (int i = 0; i < 10; ++i)
	{
		vecSums.push_back(sum - vecNums[i]);
	}

	for (int i = 0; i < 10; ++i)
		if (vecSums[i] == vecNums[i])
			answer = vecSums[i];
	cout << answer << '\n';

	return 0;
}