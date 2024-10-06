#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, int>& a, pair<string, int>& b)
{
	if (a.second == b.second) return a.first < b.first;
	else return a.second > b.second;

}

vector<int> getCnt(string name)
{
	vector<int> retAlpha(4);

	for (int i = 0; i < name.length(); ++i)
	{
		if (name[i] == 'L') retAlpha[0] += 1;
		else if (name[i] == 'O') retAlpha[1] += 1;
		else if (name[i] == 'V') retAlpha[2] += 1;
		else if (name[i] == 'E') retAlpha[3] += 1;
		else continue;
	}
	return retAlpha;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string name;
	int n;
	vector<pair<string, int>> score;
	
	cin >> name;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string teamName;
		vector<int> myNameAlphaCnt;
		vector<int> teamNameAlphaCnt;
		
		cin >> teamName;
		myNameAlphaCnt = getCnt(name);
		teamNameAlphaCnt = getCnt(teamName);
		int totalScore = 1;
		for (int j = 0; j < myNameAlphaCnt.size() - 1; ++j)
		{
			for (int k = j + 1; k < teamNameAlphaCnt.size(); ++k)
			{
				totalScore *= (myNameAlphaCnt[j] + teamNameAlphaCnt[j] + myNameAlphaCnt[k] + teamNameAlphaCnt[k]);
			}
		}
		score.push_back(make_pair(teamName, totalScore % 100));
	}
	sort(score.begin(), score.end(), compare);
	cout << score[0].first << '\n';

	return 0;
}