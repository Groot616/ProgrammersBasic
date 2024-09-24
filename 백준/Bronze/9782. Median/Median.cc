#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int idx = 1;
	vector<double> arr;

	while (idx <= 100)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;

		for (int i = 0; i < n; ++i)
		{
			double tmp;
			cin >> tmp;
			arr.push_back(tmp);
		}
		if (arr.size() % 2 == 1)
			cout << fixed << setprecision(1) << "Case " << idx << ": " << arr[arr.size() / 2] << '\n';
		else
			cout << fixed << setprecision(1) << "Case " << idx << ": " << (arr[arr.size() / 2] + arr[(arr.size() - 2) / 2]) / 2 << '\n';
		idx++;
		arr.clear();
	}


	return 0;
}