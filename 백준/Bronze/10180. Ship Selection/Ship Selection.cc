#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int test;
	
	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int answer = 0;
		int ships, length;

		cin >> ships >> length;
		for (int j = 0; j < ships; ++j)
		{
			float v, f, c;

			cin >> v >> f >> c;
			if (v * f / c >= length)
				answer += 1;
		}
		cout << answer << '\n';
	}

	return 0;
}