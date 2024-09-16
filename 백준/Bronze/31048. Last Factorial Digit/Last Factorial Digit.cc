#include <iostream>

using namespace std;

int main()
{
	int test;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int factorial;
		cin >> factorial;
		int answer = 1;
		for (int j = 1; j <= factorial; ++j)
			answer = answer % 10 * j;
		if (answer >= 10)
			answer %= 10;
		cout << answer << "\n";
	}

	return 0;
}