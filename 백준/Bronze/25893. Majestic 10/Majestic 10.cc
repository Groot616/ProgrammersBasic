#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	/*세 통계 중 어느 것도 10보다 크거나 같지 않으면 zilch를 출력
		세 통계 중 하나가 10보다 크거나 같으면 double을 출력
		세 통계 중 두 통계가 10보다 크거나 같으면 double - double을 출력
		세 통계가 모두 10보다 크거나 같으면 triple - double을 출력*/
	int test;
	vector<bool> isOverTen;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		n1 >= 10 ? isOverTen.push_back(true) : isOverTen.push_back(false);
		n2 >= 10 ? isOverTen.push_back(true) : isOverTen.push_back(false);
		n3 >= 10 ? isOverTen.push_back(true) : isOverTen.push_back(false);

		int cnt = 0;
		for (const auto& e : isOverTen)
			if (e == true)
				cnt += 1;

		if (cnt == 0) cout << n1 << " " << n2 << " " << n3 << '\n' << "zilch" << '\n' << '\n';
		else if (cnt == 1) cout << n1 << " " << n2 << " " << n3 << '\n' << "double" << '\n' << '\n';
		else if (cnt == 2) cout << n1 << " " << n2 << " " << n3 << '\n' << "double-double" << '\n' << '\n';
		else if (cnt == 3) cout << n1 << " " << n2 << " " << n3 << '\n' << "triple-double" << '\n' << '\n';
		isOverTen.clear();
		cnt = 0;
	}

	return 0;
}