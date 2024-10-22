#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	int n, s, r;
	vector<pair<int, int>> teamBoat;

	cin >> n >> s >> r;
	for (int i = 0; i < n; ++i)
		teamBoat.push_back(make_pair(i + 1, 1));
	for (int i = 0; i < s; ++i)
	{
		int teamNum;
		cin >> teamNum;
		teamBoat[teamNum - 1].second -= 1;
	}

	for (int i = 0; i < r; ++i)
	{
		int extraBoat;
		cin >> extraBoat;
		teamBoat[extraBoat - 1].second += 1;
	}

	for (int i = 0; i <= teamBoat.size() - 1; ++i)
	{
		if (teamBoat[i].second == 0)
		{
			if (i > 0 && teamBoat[i - 1].second == 2)
			{
				teamBoat[i - 1].second -= 1;
				teamBoat[i].second += 1;
			}
			else if (i < n - 1 && teamBoat[i + 1].second == 2)
			{
				teamBoat[i + 1].second -= 1;
				teamBoat[i].second += 1;
			}
		}
	}
	for (int i = 0; i < teamBoat.size(); ++i)
	{
		if (teamBoat[i].second ==0)
			answer += 1;
	}
	cout << answer << '\n';

	return 0;
}