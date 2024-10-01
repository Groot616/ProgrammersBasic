#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

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
		vector<int> triangle1(3);
		vector<int> triangle2(3);
		for (auto& x : triangle1) cin >> x;
		for (auto& x : triangle2) cin >> x;
		sort(triangle1.begin(), triangle1.end());
		sort(triangle2.begin(), triangle2.end());
		bool area1 = (int)pow(triangle1[0], 2) + (int)pow(triangle1[1], 2) == (int)pow(triangle1[2], 2);
		bool area2 = (int)pow(triangle2[0], 2) + (int)pow(triangle2[1], 2) == (int)pow(triangle2[2], 2);
		bool isSame = triangle1[0] == triangle2[0] && triangle1[1] == triangle2[1] && triangle1[2] == triangle2[2];
		if(area1 && area2 && isSame)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}