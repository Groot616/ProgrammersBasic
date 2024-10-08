#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 입력 : n1, n2
	// 출력 : n1이상 n2이하 사이의 소수 출력
	// 1. 약수가 1과 자신뿐인지 확인
	// 2. 1의 조건을 충족할 경우 출력

	int n1, n2;

	cin >> n1 >> n2;

	for (int i = n1; i <= n2; ++i)
	{
		vector<int> nums;
		if (i != 1)
		{
			for (double j = 1; j <= sqrt(i); ++j)
			{
				if (i % (int)j == 0)
				{
					nums.push_back(j);
					if (nums.size() == 2)
						break;
				}
			}
			if (nums.size() == 1)
				cout << i << '\n';
			nums.clear();
		}
	}

	return 0;
}