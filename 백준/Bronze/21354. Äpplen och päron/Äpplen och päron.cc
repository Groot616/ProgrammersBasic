#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string answer = "";
	int apple;
	int pear;

	cin >> apple >> pear;
	if (7 * apple > 13 * pear)
		answer = "Axel";
	else if (7 * apple < 13 * pear)
		answer = "Petra";
	else
		answer = "lika";
	cout << answer << '\n';

	return 0;
}