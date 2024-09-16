#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		bool exist = false;

		if (tmp == 1)
			cnt += 0;
		else if (tmp == 2 || tmp == 3)
			++cnt;
		else if (tmp == 4)
			cnt += 0;
		else if (tmp == 5)
			cnt += 1;
		else
		{
			for (int j = 2; j < tmp / 2; ++j)
			{
				// 21이면 약수의 최대 크기는 10이하45면 22 이하  2~22 반복해서 나눠서 나눠지는 수가 있다면 약수가 있는것
				if (tmp % j == 0)
					exist = true;
				if (exist)
					break;
			}
			if (!exist)
				++cnt;
		}
	}
	cout << cnt << '\n';

	return 0;
}