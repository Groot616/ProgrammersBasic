#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double answer = 0;
	int n;
	vector<int> level;

	cin >> n;
	if (n == 0)
	{
		answer = 0;
		cout << answer << '\n';
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		level.push_back(tmp);
	}
	int except;
	except = (int)round(0.15 * n);

	sort(level.begin(), level.end());
	int sum = 0;
	for (int i = except; i < n - except; ++i)
		sum += level[i];
	
	answer = (double)sum / (n - (2 * except));
	cout << (int)round(answer) << '\n';

	return 0;
}