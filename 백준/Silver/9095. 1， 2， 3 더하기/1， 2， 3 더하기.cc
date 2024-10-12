#include <iostream>

int factorial(int n)
{
	if (n == 0 || n == 1) return n;
	else return n * factorial(n - 1);
}

int combination(int n, int k)
{
	if (n == k) return 1;
	else
		return factorial(n) / (factorial(n - k) * factorial(k));
}

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int answer = 0;
		int num;

		cin >> num;
		if (num == 0)
			cout << "0" << '\n';
		else
		{

			// n_C_k = n! / ((n-k)! * k!) 
			// 1 1 1 1 1 1 1 - 1
			// 1 1 1 1 1 2, 1 1 1 1 2 1, 1 1 1 2 1 1, 1 1 2 1 1 1, 1 2 1 1 1 1, 2 1 1 1 1 1 - 6
			// 1 1 1 2 2, 1 1 2 1 2, 1 2 1 1 2, 2 1 1 1 2, 1 1 2 2 1, 1 2 1 2 1, 2 1 1 2 1, 1 2 2 1 1, 2 1 2 1 1, 2 2 1 1 1 - 10
			// 1 2 2 2, 2 1 2 2, 2 2 1 2, 2 2 2 1 - 4
			// 1 1 1 1 3, 1 1 1 3 1, 1 1 3 1 1, 1 3 1 1 1, 3 1 1 1 1 - 5
			// 1 3 3, 3 1 3, 3 3 1 - 3
			// 1 1 2 3, 1 2 1 3, 2 1 1 3, 1 2 3 1, 2 1 3 1, 2 3 1 1, 1 1 3 2, 1 3 1 2, 3 1 1 2, 1 3 2 1, 3 1 2 1 , 3 2 1 1 - 12
			// 2 2 3, 2 3 2, 3 2 2 - 3

			answer += 1; // 1의 합으로만 이루어진 식
			// (num - 1)_C_num2Cnt(1~num / 2)
			int num2Cnt = num / 2;
			if (num % 2 == 0)
			{
				answer += 1;
				for (int j = 1; j < num2Cnt; ++j)
					answer += combination(num - j, j);
			}
			else
			{
				for (int j = 1; j <= num2Cnt; ++j)
					answer += combination(num - j, j);
			}

			// 1과 3으로만 이루어진 식
			int num3cnt = num / 3;
			if (num % 3 == 0)
			{
				answer += 1;
				for (int j = 1; j < num3cnt; ++j)
					answer += combination(num - 2 * j, j);

				for (int j = 1; j <= num3cnt - 1; ++j)
				{
					for (int k = 1; k <= (num - 3 * j) / 2; ++k)
						answer += combination(num - 2 * j - k, j + k) * combination(j + k, k);
				}
			}
			else
			{
				for (int j = 1; j <= num3cnt; ++j)
					answer += combination(num - 2 * j, j);

				for (int j = 1; j <= num3cnt; ++j)
				{
					// j = 1, k = 1 / j = 1, k = 2
					for (int k = 1; k <= (num - 3 * j) / 2; ++k)
						answer += combination(num - 2 * j - k, j + k) * combination(j + k, k);
				}
			}
			cout << answer << '\n';
		}
	}

	return 0;
}