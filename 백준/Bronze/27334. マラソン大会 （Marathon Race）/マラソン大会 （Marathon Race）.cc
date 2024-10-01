#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	return a.first < b.first;
}

bool compare1(pair<int, int>& a, pair<int, int>& b)
{
	return a.second < b.second;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<pair<int, int>> grade;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int score;
		cin >> score;
		grade.push_back(make_pair(score, i));
	}
	sort(grade.begin(), grade.end(), compare);

	int tmpScore = grade[0].first;
	int cnt = 1;
	int tmp = 0;
	grade[0].first = 1;
	for (int i = 1; i < grade.size(); ++i)
	{
		if (grade[i].first == tmpScore)
		{
			tmpScore = grade[i].first;
			grade[i].first = cnt;
			++tmp;
		}
		else
		{
			tmpScore = grade[i].first;
			++cnt;
			cnt += tmp;
			grade[i].first = cnt;
			tmp = 0;
		}
	}

	sort(grade.begin(), grade.end(), compare1);
	for (int i = 0; i < grade.size(); ++i)
		cout << grade[i].first << '\n';

	return 0;
}