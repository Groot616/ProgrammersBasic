#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 일기장 종이의 가로세로 w, h
	// 앨리스가 쓰는 글자의 가로세로 a,b
	// 총 n개의 글자를 쓰려고 할 때 필요한 일기장 종이의 수(글자의 크기가 너무 커 종이에 쓸 수 없을 경우 총 매수 대신 -1 출력)
	int answer = 0;
	int w, h;
	int n, a, b;

	cin >> w >> h;
	cin >> n >> a >> b;

	if (a > w || b > h)
	{
		answer = -1;
		cout << answer << '\n';
		return 0;
	}

	n % ((w / a)* (h / b)) == 0 ? answer = n / ((w / a) * (h / b)) : answer = n / ((w / a) * (h / b)) + 1;
	cout << answer << '\n';

	return 0;
}