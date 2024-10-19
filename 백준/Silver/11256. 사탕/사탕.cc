#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int answer = 0;
		int candy, box;
		vector<int> boxArea;

		cin >> candy >> box;
		for (int j = 0; j < box; ++j)
		{
			int col, row;

			cin >> col >> row;
			boxArea.push_back(col * row);
			
		}
		sort(boxArea.rbegin(), boxArea.rend());

		for (int j = 0; j < boxArea.size(); ++j)
		{
			candy -= boxArea[j];
			++answer;
			if (candy <= 0)
				break;
		}
		cout << answer << '\n';
	}

	return 0;
}