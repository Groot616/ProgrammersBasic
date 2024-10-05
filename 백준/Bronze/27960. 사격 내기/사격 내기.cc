#include <iostream>
#include <stack>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

stack<bool> getEachScore(int score)
{
	stack<bool> realScore;

	while (true)
	{
		if (realScore.size() == 10)
			break;

		if (score % 2 == 0)
			realScore.push(0);
		else if (score % 2 == 1)
			realScore.push(1);
		else
			realScore.push(0);
		score /= 2;
	}

	return realScore;
}

vector<pair<int, bool>> getTargetScore(stack<bool> score)
{
	vector<pair<int, bool>> targetScore;
	size_t score_size = score.size();
	while (true)
	{
		if (score.empty())
			break;

		if (!score.empty())
		{
			for (int i = 0; i < score_size; ++i)
			{
				targetScore.push_back(make_pair((int)(pow(2, 9 - i)), score.top()));
				score.pop();
			}
		}
	}
	return targetScore;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int aScore;
	int bScore;
	stack<bool> checkAScore;
	stack<bool> checkBScore;
	vector<pair<int, bool>> aTargetScore;
	vector<pair<int, bool>> bTargetScore;

	cin >> aScore >> bScore;
	checkAScore = getEachScore(aScore);
	checkBScore = getEachScore(bScore);
	aTargetScore = getTargetScore(checkAScore);
	bTargetScore = getTargetScore(checkBScore);

	for (int i = aTargetScore.size() - 1; i >= 0; --i)
	{
		if ((aTargetScore[i].second ^ bTargetScore[i].second) == true)
			answer += aTargetScore[i].first;
	}
	cout << answer << '\n';

	return 0;
}