#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> answer;
	int n;

	cin >> n;
	vector<vector<char>> arr(n);
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		for (int j = 0; j < 5; ++j)
		{
			arr[i].push_back(str[j]);
		}
	}
	vector<pair<int, int>> check;
	for (int i = 0; i < 5; ++i)
	{
		int cnt = 0;
		for (int j = 0; j < n; ++j)
		{
			if (arr[j][i] == 'Y')
				++cnt;
		}
		check.push_back(make_pair(cnt, i + 1));
	}
	sort(check.begin(), check.end());
	answer.push_back(check[4].second);
	for (int i = check.size() - 2; i >= 0; --i)
	{
		if (check[i].first == check[4].first)
		{
			answer.push_back((check[i].second));
		}
	}
	sort(answer.begin(), answer.end());
	cout << answer[0];
	if (answer.size() != 1)
	{
		for (int i = 1; i < answer.size(); ++i)
			cout << "," << answer[i];
	}

	return 0;
}