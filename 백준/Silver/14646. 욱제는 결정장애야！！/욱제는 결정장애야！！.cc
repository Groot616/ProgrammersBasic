#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	int sticker = 0;
	int n;
	vector<int> arr;

	cin >> n;
	arr.resize(n);
	for (int i = 0; i < 2 * n; ++i)
	{
		int menu;

		cin >> menu;
		if (i == 0)
		{
			arr[menu - 1] += 1;
			++sticker;
		}
		else
		{
			if (arr[menu - 1] == 0)
			{
				arr[menu - 1] += 1;
				++sticker;
				if (sticker > answer)
					answer = sticker;
			}
			else
			{
				arr[menu - 1] -= 1;
				--sticker;
			}
		}
	}
	cout << answer << '\n';

	return 0;
}