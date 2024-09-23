#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// 테스트케이스 n 입력, 0입력시 종료
	// n만큼 숫자를 입력받으면 뒤집어서 출력하고 추가로 0출력
	int n;
	vector<int> arr;

	while (true)
	{
		cin >> n;
		if (n == 0)
			break;
		
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin >> tmp;
			arr.push_back(tmp);
		}
		for (int i=arr.size() - 1; i >= 0; --i)
			cout << arr[i] << '\n';
		cout << '0' << '\n';
		arr.clear();
	}

	return 0;
}