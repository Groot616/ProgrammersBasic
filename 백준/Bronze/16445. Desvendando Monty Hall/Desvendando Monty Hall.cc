#include <iostream>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int sum = 0;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp != 1)
			++sum;
	}
	cout << sum << '\n';

	return 0;
}