#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 면적a1과 가격p1을 가지는 피자조각, 반지름이 r1이고 가격이p2인 피자 한판
	// 어느 것이 더 가격대비 효율적인가
	string answer = "";
	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		float a1, p1;
		float r1, p2;
		cin >> a1 >> p1;
		cin >> r1 >> p2;
		a1 / p1 > r1 * r1 * 3.141596 / p2 ? answer = "Slice of pizza" : answer = "Whole pizza";
		cout << answer << '\n';
	}

	return 0;
}