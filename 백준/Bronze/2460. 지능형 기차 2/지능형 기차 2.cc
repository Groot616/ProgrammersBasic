#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int total = 0;
	for (int i = 0; i < 10; ++i)
	{
		int out;
		int in;
		cin >> out >> in;
		total = total + in - out;
		if (total > answer)
			answer = total;
	}
	cout << answer << '\n';
	
	return 0;
}