#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long cutWood(const vector<int>& trees, const int &mid)
{
	long long retVal = 0;
	for (int i = 0; i < trees.size(); ++i)
	{
		if (trees[i] > mid)
			retVal += trees[i] - mid;
	}
	return retVal;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int answer = 0;
	int tree, need;
	vector<int> trees;

	cin >> tree >> need;
	trees.resize(tree);
	for (auto& x : trees) cin >> x;
	
	int left = 0;
	int right = *max_element(trees.begin(), trees.end());
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		long long cutWoodLength = cutWood(trees, mid);

		if (cutWoodLength >= need)
		{
			answer = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	cout << answer << '\n';

	return 0;
}