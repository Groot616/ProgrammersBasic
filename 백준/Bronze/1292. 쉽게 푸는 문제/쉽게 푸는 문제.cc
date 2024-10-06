#include <iostream>
#include <vector>

using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int a, b;
	vector<int> nums;

	cin >> a >> b;
	for (int i = 1; i < 50; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			nums.push_back(i);
		}
	}
	
	for (int i = a - 1; i < b; ++i)
		answer += nums[i];
	cout << answer << '\n';

	return 0;
}