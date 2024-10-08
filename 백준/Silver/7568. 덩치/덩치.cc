#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<pair<int, int>, int>& a, pair<pair<int, int>, int>& b)
{
	// first.first = 몸무게, first.second = 키, second = idx

	// 몸무게가 동일할 경우 키가 큰 순으로 정렬
	if (a.first.first == b.first.first)
		return a.first.second > b.first.second;
	// 그렇지 않을 경우 몸무게 순으로 정렬
	else return a.first.first > b.first.first;
}

void insertInfo(vector<pair<pair<int, int>, int>> &info, int i)
{
	int weight, height;
	
	cin >> weight >> height;
	info.push_back(make_pair(make_pair(weight, height), i));
}

void getGrade(vector<pair<pair<int, int>, int>> vecInfo, vector<int>& answer)
{
	for (int i = 0; i < vecInfo.size(); ++i)
	{
		int grade = 0;
		for (int j = 0; j < vecInfo.size(); ++j)
		{
			if(j != i)
				if (vecInfo[i].first.first < vecInfo[j].first.first && vecInfo[i].first.second < vecInfo[j].first.second)
					++grade;
		}
		answer[i] = grade + 1;
	}


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 입력 : 테스트케이스n과 n줄의 데이터(무게와 키)
	// 출력 : 덩치 등수
	// 1. 입력받은 데이터와 idx값을 합쳐 변수 생성 o
	// 2. 입력받은 데이터를 토대로 정렬 진행 o
	// 3. 자기보다 덩치가 큰 인원의 수를 확인
	// 4. idx값을 토대로 등수 출력

	int n;
	vector<pair<pair<int, int>, int>> vecInfo;
	vector<int> answer;

	cin >> n;

	for (int i = 0; i < n; ++i)
		insertInfo(vecInfo, i);

	answer.resize(n);
	getGrade(vecInfo, answer);

	for (const auto& e : answer)
		cout << e << " ";
	cout << '\n';

	return 0;
}