#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n, x, y;
		vector<int> arr;

		cin >> n >> x >> y;
		arr.resize(n);
		
		for (auto& e : arr) cin >> e;
		if (x == arr[0] && y == arr[arr.size() - 1])
			cout << "BOTH" << '\n';
		else if (x == arr[0] && y != arr[arr.size() - 1])
			cout << "EASY" << '\n';
		else if (x != arr[0] && y == arr[arr.size() - 1])
			cout << "HARD" << '\n';
		else if (x != arr[0] && y != arr[arr.size() - 1])
			cout << "OKAY" << '\n';

		arr.clear();
	}

	return 0;
}