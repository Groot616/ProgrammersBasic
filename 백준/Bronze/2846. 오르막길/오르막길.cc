#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	bool bIsUp = false;
	vector<int> height;
	vector<int> result;
	int minHeight, maxHeight;

	cin >> n;
	height.resize(n);
	for (auto& x : height) cin >> x;
	for (int i = 1; i < height.size(); ++i)
	{
		if (height[i] > height[i - 1])
		{
			if (bIsUp == false)
			{
				minHeight = height[i - 1];
				maxHeight = height[i];
				bIsUp = true;
			}
			else
				maxHeight = height[i];
		}
		else
		{
			bIsUp = false;
			minHeight = height[i];
			maxHeight = height[i - 1];
		}
		if(bIsUp == true)
			result.push_back(maxHeight - minHeight);
	}
	if (result.size() != 0)
		cout << *max_element(result.begin(), result.end()) << '\n';
	else
		cout << "0" << '\n';

	return 0;
}