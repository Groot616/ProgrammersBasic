#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<int> num;
	stack<char> check;
	int plus = 0;
	int minus = 0;

	cin >> n;
	num.resize(n);
	for (auto& x : num) cin >> x;
	for (int i = 0; i < num[0]; ++i)
		check.push('F');
	for (int i = 1; i < num.size(); ++i)
	{
		if (check.size() < num[i])
		{
			size_t stackSize = check.size();
			for (int j = stackSize; j < num[i]; ++j)
			{
				check.push('F');
				++plus;
			}
		}
		else if (check.size() > num[i] && !check.empty())
		{
			size_t stackSize = check.size();
			for (int j = stackSize; j > num[i]; --j)
			{
				check.pop();
				++minus;
			}
		}
	}
	cout << minus << " " << plus << '\n';

	return 0;
}