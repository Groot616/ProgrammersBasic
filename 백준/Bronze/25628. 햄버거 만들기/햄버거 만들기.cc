#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int bread;
	int patty;
	cin >> bread >> patty;
	if (bread == 1)
		answer = 0;
	else if (2 * patty == bread)
		answer = patty;
	else
	{
		if (2 * patty > bread)
			answer = bread / 2;
		else
			answer = patty;
	}
	cout << answer << '\n';

	return 0;
}