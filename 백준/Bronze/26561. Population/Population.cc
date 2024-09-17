#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int test;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int population, duration;
		cin >> population >> duration;
		answer = population - (duration / 7) + (duration / 4);
		cout << answer << '\n';
	}

	return 0;
}