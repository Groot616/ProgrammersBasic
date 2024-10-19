#include <iostream>
#include <vector>

using namespace std;

void n3(int n)
{
	if (n == 1)
	{
		cout << "4" << '\n';
		cout << "1 1 0 1" << '\n';
	}
	else if (n == 2)
	{
		cout << "5" << '\n';
		cout << "2 1 1 0 1" << '\n';
	}
	else if (n == 3)
	{
		cout << "6" << '\n';
		cout << "3 2 1 1 0 1" << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> fibonacci = { 1, 2 };

	// n <= 3인 경우 따로 추가
	cin >> n;
	if (n <= 3)
	{
		n3(n);
		return 0;
	}
	else
	{
		// n보다 작은 피보나치 수열 생성
		int idx = 2;
		while (fibonacci[fibonacci.size() - 2] + fibonacci[fibonacci.size() - 1] < n)
		{
			fibonacci.push_back(fibonacci[idx - 2] + fibonacci[idx - 1]);
			++idx;
		}

		vector<int> answer;
		int maxSize = 0;
		// n과 n보다 작은 가장 피보나치 수열의 차를 구함
		// 합을 쪼개어 n-1과 n2에 더해주고 해당 값을 통해 벡터 생성후 사이즈 확인
		// ex) 기본 피보나치 : 1 2 3 5 8 13 21 34 55 89 144(n=100보다 크므로 제외)
		//	   100 - 89 = 11이므로 두번째와 세번째로 가능한 경우의 수는 {0,11}~{11,0} 12가지
		//     12가지 경우의 수를 벡터를 생성해 크기를 구하고 최대 크기일 경우 해당 벡터 출력
		int diff = n - fibonacci[fibonacci.size() - 1];
		for (int i = 0; i <= diff; ++i)
		{
			vector<int> newFibonacci = { fibonacci[fibonacci.size() - 1] + diff };
			newFibonacci.push_back(fibonacci[fibonacci.size() - 2] + (diff - i));
			newFibonacci.push_back(fibonacci[fibonacci.size() - 3] + i);

			int idx = 1;
			while (true)
			{
				int tmp = newFibonacci[idx] - newFibonacci[idx + 1];
				if (tmp >= 0)
				{
					newFibonacci.push_back(tmp);
					++idx;
				}
				else
					break;
			}
			if (newFibonacci.size() > maxSize)
			{
				maxSize = newFibonacci.size();
				answer = newFibonacci;
			}
		}
		cout << maxSize << '\n';
		for (const auto& e : answer)
			cout << e << " ";
		cout << '\n';
	}

	return 0;
}