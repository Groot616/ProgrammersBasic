#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int n;

	while (cin >> n)
	{
		answer += n;
	}
	cout << answer << '\n';

	return 0;
}