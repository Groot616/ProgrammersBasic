#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int sumOfScore = 0;
	int beforeScore = 0;
	vector<int> mush(10);
	for (auto &x : mush) cin >> x;

	int idx = 0;
	while (true)
	{
		sumOfScore += mush[idx];
		if (sumOfScore > 100)
		{
			beforeScore = sumOfScore - mush[idx];
			break;
		}
		else if (sumOfScore == 100)
		{
			cout << sumOfScore << '\n';
			return 0;
		}

		++idx;
	}
	if (abs(100 - beforeScore) < abs(100 - sumOfScore))
		cout << beforeScore;
	else if (abs(100 - beforeScore) > abs(100 - sumOfScore))
		cout << sumOfScore;
	else
		cout << sumOfScore << '\n';

	return 0;
}