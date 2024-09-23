#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// n, m입력
	// n은 1당 50포인트, m보다 클 경우 추가로 500포인트 획득
	// m은 1당 -10포인트
	// 최종포인트 출력
	int answer = 0;
	int n, m;

	cin >> n >> m;
	n > m ? answer += 500 : answer += 0;
	answer += 50 * n;
	answer -= 10 * m;
	cout << answer << '\n';

	return 0;
}