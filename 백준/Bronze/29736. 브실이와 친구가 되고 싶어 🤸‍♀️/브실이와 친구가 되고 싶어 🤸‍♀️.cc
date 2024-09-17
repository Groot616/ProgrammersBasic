#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int answer = 0;
	
	int solvedMin, solvedMax;
	int bsilSolved, diff;
	set<int> solvedFriend;
	
	cin >> solvedMin >> solvedMax;
	for (int i = solvedMin; i <= solvedMax; ++i)
		solvedFriend.insert(i);

	cin >> bsilSolved >> diff;
	int cnt = 0;
	for (auto it = solvedFriend.begin(); it != solvedFriend.end(); ++it)
	{
		if (*it >= bsilSolved - diff && *it <= bsilSolved + diff)
			++cnt;
	}
	if (cnt <= 0)
		cout << "IMPOSSIBLE" << '\n';
	else
		cout << cnt << '\n';

	return 0;
}