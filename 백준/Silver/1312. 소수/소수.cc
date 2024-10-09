#include <iostream>
#include <vector>

using namespace std;

void devideResult(int n, int m, vector<int>& decimal, int pos)
{
	int last = n % m;
	int idx = 0;
	while (idx < pos)
	{
		decimal.push_back(last * 10 / m);
		last = last * 10 % m;
		++idx;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	double n, m;
	int pos;
	vector<int> decimal;

	cin >> n >> m >> pos;
	if (n / m == static_cast<int>(n / m))
		cout << "0" << '\n';
	else
	{
		devideResult((int)n, (int)m, decimal, pos);
		cout << decimal[pos - 1] << '\n';
	}

	return 0;
}