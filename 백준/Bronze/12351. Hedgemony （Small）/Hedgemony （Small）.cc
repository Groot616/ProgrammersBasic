#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int t;
		cin >> t;
		vector<float> bush;
		
		bush.resize(t);
		for (auto& x : bush) cin >> x;
		for (int j = 1; j < t - 1; ++j)
		{
			if ((bush[j - 1] + bush[j + 1]) / 2 < bush[j])
				bush[j] = (bush[j - 1] + bush[j + 1]) / 2;
		}
		cout << fixed;
		cout.precision(6);
		cout << "Case #" << i + 1 << ": " << bush[t - 2] << '\n';
		bush.clear();
	}

	return 0;
}