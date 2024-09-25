#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int play;
	vector<int> team1;
	vector<int> team2;

	cin >> play;
	team1.resize(play);
	team2.resize(play);
	for (auto& x : team1) cin >> x;
	for (auto& x : team2) cin >> x;
	for (int i = 0; i < play; ++i)
	{
		if (team1[i] > team2[i]) answer += 3;
		else if (team1[i] < team2[i]) answer = answer;
		else answer += 1;
	}
	cout << answer << '\n';

	return 0;
}