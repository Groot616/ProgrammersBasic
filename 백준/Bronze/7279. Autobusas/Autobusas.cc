#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	int total = 0;
	vector<int> cantSit;

	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		int in, out;
		cin >> in >> out;
		total += in - out;
		if (total > k)
			cantSit.push_back(total - k);
	}
	if (cantSit.size() != 0)
		cout << *max_element(cantSit.begin(), cantSit.end());
	else
		cout << "0" << '\n';

	return 0;
}