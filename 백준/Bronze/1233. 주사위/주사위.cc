#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second > b.second;
}

int main()
{
	int s1, s2, s3;
	unordered_map<int, int> sumCnt;
	vector<pair<int, int>> answer;

	cin >> s1 >> s2 >> s3;
	for (int i = 1; i <= s1; ++i)
		for (int j = 1; j <= s2; ++j)
			for (int k = 1; k <= s3; ++k)
				sumCnt[i + j + k]++;
	
	for (const auto& e : sumCnt)
		answer.push_back(make_pair(e.first, e.second));
	sort(answer.begin(), answer.end(), compare);

	cout << answer[0].first << "\n";
	
}