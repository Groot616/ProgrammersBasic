#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int card, num, stage;

	cin >> card >> num >> stage;
	for (int i = 0; i < stage; ++i)
	{
		int m;
		vector<int> arr;
		bool isKeep = false;

		cin >> m;
		arr.resize(m);
		for (auto& x : arr) cin >> x;
		for (const auto& e : arr)
		{
			if (e == num)
			{
				isKeep = true;
				break;
			}
		}
		if (isKeep) cout << "KEEP" << '\n';
		else cout << "REMOVE" << '\n';
		arr.clear();
	}

	return 0;
}