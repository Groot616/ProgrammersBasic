#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * (b / gcd(a, b));
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums;
	vector<int> result;

	nums.resize(5);
	for (auto& x : nums) cin >> x;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = i + 1; j < 4; ++j)
		{
			for (int k = j + 1; k < 5; ++k)
			{
				int lcm1 = lcm(nums[i], nums[j]);
				int lcm2 = lcm(lcm1, nums[k]);
				result.push_back(lcm2);
			}
		}
	}
	if(result.size() != 0)
		cout << *min_element(result.begin(), result.end()) << '\n';
	else
	{
		sort(nums.begin(), nums.end());
		cout << nums[0] * nums[1] * nums[2] << '\n';
	}

	return 0;
}