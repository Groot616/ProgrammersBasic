#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (true)
	{
		int n;
		vector<int> data;
		int cnt = 0;
		bool up = false;
		bool down = false;

		cin >> n;
		if (n == 0)
			break;

		data.resize(n);
		for (auto& x : data) cin >> x;
		for(int i=1; i<data.size(); ++i)
		{
			if (data[i] > data[i - 1])
				up = true;
			else if (data[i] < data[i - 1] && up == true)
				down = true;

			if (up == true && down == true)
			{
				++cnt;
				up = false;
				down = false;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}