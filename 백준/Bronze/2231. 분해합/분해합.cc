#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 입력 : n
	// 출력 : 분해합이 되는 가장 작은 수(ex: n = 216일때, 198 + 1 + 9 + 8 = 216이므로 출력은 198)
	// 1. 문자열로 입력받고 stoi(num) + num.substr(i, 1)로 각 문자 덧셈 진행
	// 2. 1의 조건을 충족할 경우 출력

	int answer = 0;
	int num;

	cin >> num;
	for (int i = num - 9 * to_string(num).length(); i < num; ++i)
	{
		int totalSum = i;
		int tmp = i;
		while (tmp > 0)
		{
			totalSum += tmp % 10;
			tmp /= 10;

		}
		if (totalSum == num)
		{
			answer = i;
			break;
		}
	}
	cout << answer << '\n';

	return 0;
}