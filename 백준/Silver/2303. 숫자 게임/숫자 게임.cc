#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	if (a.first == b.first) return a.second > b.second;
	else return a.first > b.first;
}

int getSumMax(const vector<int> nums)
{
	int sumMax = -1;
	for (int i = 0; i < nums.size() - 2; ++i)
	{
		for (int j = i + 1; j < nums.size() - 1; ++j)
		{
			for (int k = j + 1; k < nums.size(); ++k)
			{
				if ((nums[i] + nums[j] + nums[k]) % 10 > sumMax)
					sumMax = (nums[i] + nums[j] + nums[k]) % 10;
			}
		}
	}
	return sumMax;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	vector<pair<int, int>> totalScore;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		vector<int> nums(5);
		for (auto& x : nums) cin >> x;
		totalScore.emplace_back(getSumMax(nums), i + 1);
	}
	sort(totalScore.begin(), totalScore.end(), compare);
	cout << totalScore[0].second << '\n';

	return 0;
}