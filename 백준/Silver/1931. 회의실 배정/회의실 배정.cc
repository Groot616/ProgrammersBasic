#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<pair<int, int>, int>& a, pair<pair<int, int>, int>& b)
{
	// 회의 종료시각이 같을 경우 회의 시작시각이 큰 순서대로 정렬 => 
	// 2
	// 1 2
	// 1 1
	// 3
	// 4 4
	// 3 4
	// 2 4
	if (a.first.second == b.first.first)
	{
		if (a.first.first == b.first.first) return a.first.second < b.first.second;
		else if (a.first.second == b.first.second) return a.first.first < b.first.first;

		//return a.first.first < b.first.first;
		//return a.first.second < b.first.second;
	}
	else
	{
		if (a.second == b.second) return a.first.first < b.first.first;
		else return a.first.second < b.first.second;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int answer = 0;
	int n;
	vector<pair<pair<int, int>, int>> time;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int start;
		int end;
		cin >> start >> end;
		time.push_back(make_pair(make_pair(start, end), end - start));
	}
	sort(time.begin(), time.end(), compare);
	
	// 시간차 순으로 정렬된 것을 토대로 가능한 회의수 구하기
	int commuStart = time[0].first.first;
	int commuEnd = time[0].first.second;
	++answer;
	for (int i = 1; i < time.size(); ++i)
	{
		if (time[i].first.first >= commuEnd)
		{
			++answer;
			commuStart = time[i].first.first;
			commuEnd = time[i].first.second;
		}
	}
	cout << answer << '\n';

	return 0;
}