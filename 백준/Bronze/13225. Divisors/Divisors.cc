#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

int calc(int num)
{
	int cnt = 1;
	for (int i = 1; i <= num / 2; ++i)
	{
		if (num % i == 0)
			++cnt;
	}

	return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int num;
		
		cin >> num;
		cout << num << " " << calc(num) << '\n';
	}

	return 0;
}