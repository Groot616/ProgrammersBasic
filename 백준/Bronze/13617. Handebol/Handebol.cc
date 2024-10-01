#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int player, play;
	vector<vector<int>> total;

	cin >> player >> play;
	total.resize(player);

	for (int i = 0; i < player; ++i)
	{
		for (int j = 0; j < play; ++j)
		{
			int score;
			cin >> score;
			if (score != 0)
				total[i].push_back(score);
		}
	}
	for (int i = 0; i < total.size(); ++i)
	{
		if (total[i].size() == play)
			++answer;
	}
	cout << answer << '\n';

	return 0;
}