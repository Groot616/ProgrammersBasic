#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int sCnt;
	int aCnt;

	cin >> sCnt;
	cin >> aCnt;
	int minCnt = min(sCnt, aCnt);
	if (minCnt != 1)
		minCnt % 2 == 0 ? answer = minCnt / 2 : answer = (minCnt - 1) / 2;
	else
		answer = 0;
	cout << answer << '\n';

	return 0;
}