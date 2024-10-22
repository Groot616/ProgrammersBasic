#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int r, c;
	vector<string> race;
	vector<pair<int, int>> grade;

	cin >> r >> c;
	grade.resize(r);
	for (int i = 0; i < r; ++i)
	{
		string str;
		cin >> str;
		race.push_back(str);
	}

	for (int i = 0; i < race.size(); ++i)
		reverse(race[i].begin(), race[i].end());

	for (int i = 0; i < race.size(); ++i)
	{
		int idx = 0;
		while (true)
		{
			if (race[i][idx] == 'S')
				break;

			if (race[i][idx] != '.' && race[i][idx] != 'F')
			{
				grade[race[i][idx] - '0'].first = idx;
				grade[race[i][idx] - '0'].second = race[i][idx] - '0';
				break;
			}
			else
				++idx;
		}
	}
	int idx = 0;
	while (true)
	{
		if (idx == 10)
			break;

		if (grade[idx].first == 0)
		{
			grade.erase(grade.begin() + idx);
			if (grade.size() == 9)
				break;
		}
		else
			++idx;
	}
	sort(grade.begin(), grade.end());

	int start = 1;
	int tmp;
	for (int i = 0; i < grade.size(); ++i)
	{
		tmp = grade[i].first;
		grade[i].first = start;
		if(i + 1 < grade.size())
			if (grade[i + 1].first != tmp)
				++start;
	}
	sort(grade.begin(), grade.end(), compare);

	for (const auto& e : grade)
		cout << e.first << '\n';

	return 0;
}