#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int answer = 0;

	int a, b, c, d;
	vector<int> rats;

	cin >> a >> b >> c >> d;
	rats.push_back(a);
	rats.push_back(b);
	rats.push_back(c);
	rats.push_back(d);
	sort(rats.rbegin(), rats.rend());
	for (int i = 0; i < rats.size() - 1; ++i)
	{
		answer += rats[i];
	}
	cout << answer + 1 << "\n";

	return 0;
}