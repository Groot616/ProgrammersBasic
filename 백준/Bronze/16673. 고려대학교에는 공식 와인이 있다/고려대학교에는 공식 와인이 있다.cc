#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int year, love, addiction;

	cin >> year >> love >> addiction;
	for (int i = 1; i <= year; ++i)
		answer += love * i + addiction * (int)pow(i, 2);
	cout << answer << '\n';

	return 0;
}