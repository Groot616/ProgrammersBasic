#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int t;
		vector<float> height;
		cin >> t;
		height.resize(t);
		for (auto& x : height) cin >> x;
		for (int j = 1; j < height.size() - 1; ++j)
		{
			if (height[j] > (height[j - 1] + height[j + 1]) / 2)
				height[j] = (height[j - 1] + height[j + 1]) / 2;
		}
		cout << fixed;
		cout.precision(6);
		cout << "Case #" << i + 1 << ": " << height[height.size() - 2] << '\n';
		height.clear();
	}

	return 0;
}