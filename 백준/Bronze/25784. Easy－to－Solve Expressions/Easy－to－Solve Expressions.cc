#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	/*세 숫자 중 하나가 다른 두 숫자의 합이면 1을 출력하고, 세 숫자 중 하나가 다른 두 숫자의 곱이면 2를 출력하고,
	그렇지 않으면 3을 출력합니다.이 세 개의 조건 중 정확히 한 개가 적용된다에 가정합니다.*/
	int n1, n2, n3;
	vector<int> arr;

	cin >> n1 >> n2 >> n3;
	arr.push_back(n1);
	arr.push_back(n2);
	arr.push_back(n3);
	sort(arr.begin(), arr.end());

	if (arr[0] + arr[1] == arr[2])
		cout << '1' << '\n';
	else if (arr[0] * arr[1] == arr[2] || arr[0] * arr[2] == arr[1] || arr[1] * arr[2] == arr[0])
		cout << '2' << '\n';
	else
		cout << '3' << '\n';

	return 0;
}