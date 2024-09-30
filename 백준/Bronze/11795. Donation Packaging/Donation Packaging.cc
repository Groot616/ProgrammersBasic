#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<int> package(3, 0);
	int setA, setB, setC;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> setA >> setB >> setC;
		package[0] += setA;
		package[1] += setB;
		package[2] += setC;
		if (package[0] < 30 || package[1] < 30 || package[2] < 30)
			cout << "NO" << '\n';
		else
		{
			int min = *min_element(package.begin(), package.end());
			cout << min << '\n';
			package[0] -= min;
			package[1] -= min;
			package[2] -= min;
		}
	}

	return 0;
}