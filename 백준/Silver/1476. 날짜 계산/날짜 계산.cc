#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int e, s, m;
	int year = 1;
	int E = 1;
	int S = 1;
	int M = 1;

	cin >> e >> s >> m;
	while (true)
	{
		if (E == e && S == s && M == m)
		{
			cout << year << '\n';
			break;
		}

		E++; S++; M++;
		if (E > 15) E = 1;
		if (S > 28) S = 1;
		if (M > 19) M = 1;

		year++;
	}

	return 0;
}