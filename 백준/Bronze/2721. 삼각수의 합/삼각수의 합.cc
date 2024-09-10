#include <iostream>

using namespace std;

int CalcWeight(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; ++i)
	{
		sum += i * ((i + 1) * (i + 2) / 2);
	}
	return sum;
}

int main()
{
	int n;
	int sum = 0;

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		int input;
		cin >> input;
		cout << CalcWeight(input) << "\n";
	}
	
	return 0;
}