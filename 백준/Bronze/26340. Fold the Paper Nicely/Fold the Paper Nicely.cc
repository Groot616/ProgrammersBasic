#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, p1, p2, cnt;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> p1 >> p2 >> cnt;
		cout << "Data set: " << p1 << " " << p2 << " " << cnt << '\n';
 		for (int j = 0; j < cnt; ++j)
		{
			if (p1 > p2)
				p1 /= 2;
			else
				p2 /= 2;
		}
		cout << max(p1, p2) << " " << min(p1, p2) << '\n' << '\n';
	}

	return 0;
}