#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int answer = 0;
	int n, m;
	int drop;
	vector<int> pos;

	cin >> n >> m;
	cin >> drop;
	pos.resize(drop);
	for (auto& x : pos) cin >> x;

	int x1 = 1;
	int x2 = m;
	for (int i = 0; i < pos.size(); ++i)
	{
		while (true)
		{
			if (pos[i] >= x1 && pos[i] <= x2)
				break;
			else
			{
				if (pos[i] > x2)
				{
					++x1; ++x2;
					++answer;
				}
				else if (pos[i] < x1)
				{
					--x1; --x2;
					++answer;
				}
			}
		}
	}
	cout << answer << '\n';

	return 0;
}