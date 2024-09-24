#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	// 입력은 여러 테스트 케이스로 구성됩니다.첫 번째 줄은 테스트 케이스의 수를 나타내는 정수를 포함합니다.
	// 각 테스트 케이스는 다음과 같습니다.각 테스트 케이스는 4개의 정수 1 ≤ lt, wt, le, we ≤ 109를 포함하는 단일 라인으로 구성되며,
	// lt와 wt는 TelecomParisTech의 스포츠 분야의 길이와 너비를 나타내고, le와 우리는 Eurecom의 스포츠 분야의 길이와 너비를 나타냅니다.
	// 입력의 각 테스트 케이스에 대해 프로그램은 한 줄을 생성해야 합니다. 줄의 내용은 시설이 더 큰 학교 이름이어야 합니다: Telecom ParisTech 또는 Eurecom.
	// 동점인 경우 줄의 내용은 Tie여야 합니다. 출력에 빈 줄이 없어야 합니다
	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		long long lt, wt, le, we;
		cin >> lt >> wt >> le >> we;
		if (lt * wt > le * we)
			cout << "TelecomParisTech" << '\n';
		else if (lt * wt < le * we)
			cout << "Eurecom" << '\n';
		else
			cout << "Tie" << '\n';
	}

	return 0;
}