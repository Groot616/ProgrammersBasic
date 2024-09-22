#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test;
	
	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int score;
		cin >> score;
		if (score > 4500)
			cout << "Case #" << i + 1 << ": Round 1" << '\n';
		else if (score <= 4500 && score > 1000)
			cout << "Case #" << i + 1 << ": Round 2" << '\n';
		else if (score <= 1000 && score > 25)
			cout << "Case #" << i + 1 << ": Round 3" << '\n';
		else if (score <= 25)
			cout << "Case #" << i + 1 << ": World Finals" << '\n';
	}

	return 0;
}