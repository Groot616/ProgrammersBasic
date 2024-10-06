#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int r;
	string myPlay;
	int n;
	vector<string> friendPlay;

	cin >> r;
	cin >> myPlay;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string otherPlay;
		cin >> otherPlay;
		friendPlay.push_back(otherPlay);
	}

	int totalScore = 0;
	for (int i = 0; i < myPlay.length(); ++i)
	{
		for (int j = 0; j < friendPlay.size(); ++j)
		{
			if (myPlay[i] == friendPlay[j][i]) totalScore += 1;
			else if (myPlay[i] == 'S' && friendPlay[j][i] == 'P') totalScore += 2;
			else if (myPlay[i] == 'P' && friendPlay[j][i] == 'R') totalScore += 2;
			else if (myPlay[i] == 'R' && friendPlay[j][i] == 'S') totalScore += 2;
		}
	}
	cout << totalScore << '\n';

	vector<char> RSP = { 'R', 'S', 'P' };
	vector<int> findMaxScore;
	int maxScore = 0;
	for (int i = 0; i < friendPlay[0].length(); ++i)
	{
		for (int j = 0; j < RSP.size(); ++j)
		{
			int sum = 0;
			char myTurn = RSP[j];
			for (int k = 0; k < friendPlay.size(); ++k)
			{
				if (myTurn == friendPlay[k][i]) sum += 1;
				else if (myTurn == 'R' && friendPlay[k][i] == 'S') sum += 2;
				else if (myTurn == 'S' && friendPlay[k][i] == 'P') sum += 2;
				else if (myTurn == 'P' && friendPlay[k][i] == 'R') sum += 2;
			}
			findMaxScore.push_back(sum);
		}
		maxScore += *max_element(findMaxScore.begin(), findMaxScore.end());
		findMaxScore.clear();
	}
	cout << maxScore << '\n';

	return 0;
}