#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 토니의 디지털 시계는 t1시 m1분
	// 호수를 한바퀴 돈 뒤 집에 도착해 시계를 보니 t2시 m2분
	// 산책시간은 하루보다 짧으며 0분일 수도 있음, 호수 한바퀴는 30분
	// 산책에 걸린 시간 m분과 호수를 완전히 한바퀴 돈 횟수 n번을 출력

	int t1, m1, t2, m2;
	cin >> t1 >> m1 >> t2 >> m2;

	int startMin = 60 * t1 + m1;
	int endMin = 60 * t2 + m2;
	int totalMin = 0;
	if (endMin >= startMin)
		totalMin = endMin - startMin;
	else
		totalMin = (1440 - startMin) + endMin;
	cout << totalMin << " " << totalMin / 30 << '\n';

	return 0;
}