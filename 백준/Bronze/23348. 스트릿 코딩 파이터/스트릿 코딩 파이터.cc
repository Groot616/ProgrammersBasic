#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int p1, p2, p3;
	int n;
	set<int> teamScore;

	cin >> p1 >> p2 >> p3;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int sum = 0;
		for (int j = 0; j < 3; ++j)
		{
			int a, b, c;
			cin >> a >> b >> c;
			sum += p1 * a + p2 * b + p3 * c;
		}
		teamScore.insert(sum);
	}
	cout << *teamScore.rbegin() << '\n';

	return 0;
}