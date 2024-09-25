#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int n;
	
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j <= i; ++j)
			answer += i + j;
	}
	cout << answer << '\n';

	return 0;
}