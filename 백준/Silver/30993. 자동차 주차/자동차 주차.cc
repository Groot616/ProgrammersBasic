#include <iostream>
#include <vector>

using namespace std;

vector<long long> facto(16, 0);

long long factorial(int n)
{
	if (n == 0 || n == 1) return facto[n];
	else if (facto[n] != 0) return facto[n];
	else
	{
		facto[n] = n * factorial(n - 1);
		return facto[n];
	}
}

long long combination(const int n, const int k)
{
	// n_C_k = n! / ((n - k)! * k!)
	return factorial(n) / (factorial(n - k) * factorial(k));
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	// 같은 차종의 빨간색 자동차 A대, 초록색 자동차 B대, 파란색 자동차 C대를 N칸의 주차장에 1대씩 주차하려고함
	// 모든 자동차를 한칸에 한 대씩 주차할 수 있는 경우의 수 출력
	// ex)  입력 : 7 2 2 3 , 출력 : 210
	// 풀이 : n_C_a + (n-a)_C_b + (n-a-b)_C_c
	
	long long answer;
	int n, a, b, c;
	facto[0] = 1;
	facto[1] = 1;

	cin >> n >> a >> b >> c;
	answer = combination(n, a);
	answer *= combination(n - a, b);
	answer *= combination(n - a - b, c);
	cout << answer << '\n';

	return 0;
}