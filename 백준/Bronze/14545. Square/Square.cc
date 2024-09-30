#include <iostream>
#include <cmath>

using namespace std;

int getBefore(int n)
{
	int sum = 0;
	if (n == 1) return (int)pow(n, 2);
	else
		return (int)pow(n, 2) + getBefore(n - 1);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int beforeAnswer = 0;
	int n;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int answer = 0;
		int l;
		cin >> l;
		
		if (l == 1)
		{
			answer = 1;
		}
		else
			answer += (int)pow(l, 2) + getBefore(l - 1);
		cout << answer << '\n';
	}

	return 0;
}