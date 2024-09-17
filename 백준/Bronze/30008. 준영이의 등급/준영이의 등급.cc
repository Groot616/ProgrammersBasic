#include <iostream>
#include <vector>

using namespace std;

void getRate(vector<int> grade, vector<int> &answer)
{
	for (const auto& e : grade)
	{
		if (e >= 0 && e <= 4)
			answer.push_back(1);
		else if (e > 4 && e <= 11)
			answer.push_back(2);
		else if (e > 11 && e <= 23)
			answer.push_back(3);
		else if (e > 23 && e <= 40)
			answer.push_back(4);
		else if (e > 40 && e <= 60)
			answer.push_back(5);
		else if (e > 60 && e <= 77)
			answer.push_back(6);
		else if (e > 77 && e <= 89)
			answer.push_back(7);
		else if (e > 89 && e <= 96)
			answer.push_back(8);
		else if (e > 96 && e <= 100)
			answer.push_back(9);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	// n명의 학생과 k개의 과목이 있고, 모든 학생은 k개의 과목을 전부 수강함
	// 등급은 백분율 기준, 백분율 = 해당과목 등수 * 100 / 학생수
	
	vector<int> answer;
	vector<int> vecGrade;
	int n, k;
	
	cin >> n >> k;
	for (int i = 0; i < k; ++i)
	{
		int grade;
		cin >> grade;
		vecGrade.push_back(grade * 100 / n);
	}

	getRate(vecGrade, answer);

	cout << answer[0];
	for (int i = 1; i < k; ++i)
		cout << " " << answer[i];
	cout << '\n';

	return 0;
}