#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int day;
	int week;

	cin >> day;
	cin >> week;

	day + week * 7 <= 30 ? answer = 1 : answer = 0;
	cout << answer << '\n';

	return 0;
}