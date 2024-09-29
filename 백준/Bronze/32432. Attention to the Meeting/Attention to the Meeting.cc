#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	int director;
	int speech;

	cin >> director;
	cin >> speech;

	if (director == 1)
		answer = speech;
	else
		answer = (speech - (director - 1)) / director;
	cout << answer << '\n';

	return 0;
}