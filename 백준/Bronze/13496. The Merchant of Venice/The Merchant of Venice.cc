#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	// 테스트케이스 t개
	// n개의 배 소유, 하루에 s만큼 이동하며 도착까지 남은 기한은 d일
	// n개의 배들에 대해 도착까지 남은 거리d_i와 배의 가치v_i
	// 총 수익을 출력
	int test;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int n, s, d;
		int sum = 0;

		cin >> n >> s >> d;
		int total = s * d;
		for (int j = 0; j < n; ++j)
		{
			int d_i, v_i;
			cin >> d_i >> v_i;
			if (d_i <= total)
				sum += v_i;
		}
		cout << "Data Set " << i + 1 << ":" << '\n';
		cout << sum;
		if (i < test - 1) cout << '\n' << '\n';
	}

	return 0;
}