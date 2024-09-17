#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int answer = 0;
	int t;

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n, a, d;
		cin >> n >> a >> d;
		answer += a;
		for (int j = 1; j < n; ++j)
		{
			int nextSum = a + j * d;
			answer += nextSum;
		}
		cout << answer << '\n';
		answer = 0;
	}

	return 0;
}