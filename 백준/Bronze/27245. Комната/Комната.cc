#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 가로 세로 높이가 mm 단위로 주어질 때 좋은 방인지 판별
	// 다음 조건을 모두 만족하는 방은 좋은 방
	// - 가로와 세로 중 더 짧은 쪽의 길이와 높이의 비가 2 이상
	// - 가로와 세로의 더 긴 쪽의 길이와 짧은쪽의 길이의 비는 2를 초과하면 안됨
	// 입력 : 가로 세로 높이 w,l,h 
	// 출력 : 좋은 방이면 good, 아니면 bad
	float w, l, h;
	bool case1 = false;
	bool case2 = false;

	cin >> w >> l >> h;
	float min_wl_h_ratio = min(w, l) / h;
	float wl_ratio = max(w, l) / min(w, l);

	if(min_wl_h_ratio >= 2 && wl_ratio <= 2)
		cout << "good" << '\n';
	else
		cout << "bad" << '\n';

	return 0;
}