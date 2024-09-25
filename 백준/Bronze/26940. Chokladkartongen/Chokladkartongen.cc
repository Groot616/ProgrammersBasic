#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int day;
	vector<int> chocolate;

	cin >> day;
	chocolate.resize(day);
	for (auto& x : chocolate) cin >> x;
	for (int i = 1; i < chocolate.size(); ++i)
	{
		if (chocolate[i] > chocolate[i - 1])
			answer += 1;
	}
	cout << answer << '\n';

	return 0;
}