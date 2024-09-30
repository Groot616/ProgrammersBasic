#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	unordered_map<int, int> checkTeam;

	cin >> n;
	for (int i = 0; i < 2 * n - 1; ++i)
	{
		int num;
		cin >> num;
		checkTeam[num]++;
	}
	for (auto it = checkTeam.begin(); it != checkTeam.end(); ++it)
	{
		if (it->second == 1)
			cout << it->first << '\n';
	}

	return 0;
}