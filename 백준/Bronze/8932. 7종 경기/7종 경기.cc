#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	/*종목	A	B	C	P	종류
	  100미터 허들	9.23076	26.7	1.835	sec	트랙
	  높이뛰기	1.84523	75	1.348	cm	필드
	  포환던지기	56.0211	1.5	1.05	m	필드
	  200미터 달리기	4.99087	42.5	1.81	sec	트랙
	  멀리뛰기	0.188807	210	1.41	cm	필드
	  창던지기	15.9803	3.8	1.04	m	필드
	  800미터 달리기	0.11193	254	1.88	sec	트랙*/
	// 트랙경기 : A * (B - P)^C
	// 필드경기 : A * (P - B)^C
	
	int t;
	vector<pair<char, double>> score = { {'t', 0}, {'f', 0}, {'f', 0}, {'t', 0}, {'f', 0}, {'f', 0}, {'t', 0} };
	vector<vector<double>> constant = { { 9.23076, 26.7, 1.835 }, { 1.84523, 75, 1.348 }, { 56.0211, 1.5, 1.05 }, { 4.99087, 42.5, 1.81 },
		{ 0.188807, 210, 1.41 }, { 15.9803, 3.8, 1.04 }, { 0.11193, 254, 1.88 } };

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		double totalScore = 0;
		// 스코어 입력
		for (int j = 0; j < 7; ++j)
		{
			double myScore = 0;
			cin >> myScore;
			score[j].second = myScore;
		}

		// 계산
		for (int j = 0; j < score.size(); ++j)
		{
			if (score[j].first == 't')
				totalScore += (int)(constant[j][0] * pow((constant[j][1] - score[j].second), constant[j][2]));
			else
				totalScore += (int)(constant[j][0] * pow((score[j].second - constant[j][1]), constant[j][2]));
		}
		cout << totalScore << '\n';
	}

	return 0;
}