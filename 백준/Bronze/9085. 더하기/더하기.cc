#include <iostream>

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
		int t;
		cin >> t;
		for (int j = 0; j < t; ++j)
		{
			int tmp;
			cin >> tmp;
			answer += tmp;
		}
		cout << answer << '\n';
	}
	
	return 0;
}