#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	return a.first > b.first;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer1 = 0;
	vector<int> answer2;
	vector<pair<int, int>> vecScore;

	for (int i = 0; i < 8; ++i)
	{
		int score;
		cin >> score;
		vecScore.push_back(make_pair(score, i + 1));
	}
	
	sort(vecScore.begin(), vecScore.end(), compare);
	for (int i = 0; i < 5; ++i)
	{
		answer1 += vecScore[i].first;
		answer2.push_back(vecScore[i].second);
	}
	cout << answer1 << '\n';
	sort(answer2.begin(), answer2.end());
	for (const auto& e : answer2)
		cout << e << " ";
	cout << '\n';

	return 0;
}