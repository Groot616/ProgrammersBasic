#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// n x m 만큼 0과 1이 랜덤하게 주어질 때
	// 1을 0으로 변경하거나 0을 1로 변경한다고 가정
	// 가장 적게 변경하는 횟수는?
	int answer = 0;
	int n, m;
	unordered_map<int, int> numCnt;

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		for (int j = 0; j < m; ++j)
			numCnt[str[j] - '0']++;
	}
	answer = min(numCnt[0], numCnt[1]);
	cout << answer << '\n';

	return 0;
}