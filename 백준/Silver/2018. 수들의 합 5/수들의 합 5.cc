#include <iostream>
#include <vector>

using namespace std;

void makeMemo(const int& n, vector<long long>& memo)
{
	for (int i = 1; i <= n; ++i)
		memo[i] = i + memo[i - 1];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int answer = 0;
	int n;

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		int start = i;
		int sum = 0;
		while (true)
		{
			sum += start;
			++start;
			if (sum == n)
			{
				++answer;
				break;
			}
			else if (sum > n)
				break;
		}
	}
	cout << answer << '\n';

	return 0;
}