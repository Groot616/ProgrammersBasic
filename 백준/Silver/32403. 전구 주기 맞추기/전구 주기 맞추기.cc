#include <iostream>
#include <vector>

using namespace std;

vector<int> getDivisor(int n)
{
	vector<int> retVec;

	for (int i = 1; i <= n / 2; ++i)
		if (n % i == 0) retVec.push_back(i);
	return retVec;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	int n, t;
	vector<int> light;
	vector<int> divisor;

	cin >> n >> t;
	light.resize(n);
	for (auto& x : light) cin >> x;

	divisor = getDivisor(t);
	divisor.push_back(t);
	for (int i = 0; i < light.size(); ++i)
	{
		int diffMin = 9999;
		for (int j = 0; j < divisor.size(); ++j)
		{
			if (light[i] == divisor[j])
			{
				diffMin = 9999;
				break;
			}
			else
			{
				if (diffMin > abs(light[i] - divisor[j]))
					diffMin = abs(light[i] - divisor[j]);
			}
		}
		if (diffMin != 9999)
			answer += diffMin;
	}
	cout << answer << '\n';

	return 0;
}