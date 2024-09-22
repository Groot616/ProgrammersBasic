#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	set<int> time;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int bus;
		int market;
		cin >> bus >> market;
		time.insert(bus + market);
	}
	auto it = time.begin();
	cout << *it << '\n';

	return 0;
}