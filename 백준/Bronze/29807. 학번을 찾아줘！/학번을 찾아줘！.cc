#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// 국어 > 영어 ? abs(국어-영어)*508 : abs(국어-영어)*108
	// 수학 > 탐구 ? abs(수학-탐구)*212 : abs(수학-탐구)*305
	// if(제2외국어) 제2외국어*707
	// answer = 위합 * 4763

	long long answer = 0;
	int n;
	cin >> n;
	vector<long long> score(5, 0);

	for (int i = 0; i < n; ++i)
	{
		long long scoreInput;
		cin >> scoreInput;
		score[i] = scoreInput;
	}

	score[0] > score[2] ? answer += 4763 * 508 * abs(score[0] - score[2]) : answer += 4763 * 108 * abs(score[0] - score[2]);
	score[1] > score[3] ? answer += 4763 * 212 * abs(score[1] - score[3]) : answer += 4763 * 305 * abs(score[1] - score[3]);
	if (score[4] != 0) answer += 4763 * 707 * score[4];


	cout << answer << '\n';

	return 0;
}