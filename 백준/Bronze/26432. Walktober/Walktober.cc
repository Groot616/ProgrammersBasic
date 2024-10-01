#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	
	int t;
	int person, day, JohnID;
	vector<vector<int>> total;
	vector<vector<int>> playerWalkByDay;
	vector<int> JohnWalkByDay;

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int answer = 0;
		cin >> person >> day >> JohnID;
		total.resize(person);
		for (int j = 0; j < person; ++j)
		{
			for (int k = 0; k < day; ++k)
			{
				int walk;
				cin >> walk;
				total[j].push_back(walk);
			}
		}

		for (int j = 0; j < day; ++j)
			JohnWalkByDay.push_back(total[JohnID - 1][j]);

		playerWalkByDay.resize(day);
		for (int j = 0; j < day; ++j)
		{
			for (int k = 0; k < person; ++k)
			{
				if(k != JohnID - 1)
					playerWalkByDay[j].push_back(total[k][j]);
			}
		}
		
		for (int j = 0; j < day; ++j)
		{

			int maxElement = *max_element(playerWalkByDay[j].begin(), playerWalkByDay[j].end());
			if (maxElement > JohnWalkByDay[j])
				answer += maxElement - JohnWalkByDay[j];
		}
		cout << "Case #" << i + 1 << ": " << answer << '\n';
		total.clear();
		playerWalkByDay.clear();
		JohnWalkByDay.clear();
	}
	
	return 0;
}