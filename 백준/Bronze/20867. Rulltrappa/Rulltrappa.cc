#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	// 오른쪽이 더 빠른 경우 latmask, 왼쪽이 더 빠른 경우 friskus 출력
	string answer = "";
	float m, s, g; // m : 계단, s : 가만히 있을때 1초당 에스컬레이터가 올라가는 계단 수, g : 걸어올라갈 때 1초당 올라가는 계단 수
	float a, b; // 왼쪽, 오른쪽 줄에 대기중인 사람, a,b 명씩 있을 때 줄을 서기까지 a초에 한명, b초에 한명씩 선다는 의미
	float l, r; // l : 왼쪽에 대기중인 사람, r : 오른쪽에 대기중인 사람
	float timeL, timeR;

	cin >> m >> s >> g;
	cin >> a >> b;
	cin >> l >> r;
	timeL = l / a + m / g;
	timeR = r / b + m / s;

	timeL < timeR ? answer = "friskus" : answer = "latmask";
	cout << answer << '\n';

	return 0;
}