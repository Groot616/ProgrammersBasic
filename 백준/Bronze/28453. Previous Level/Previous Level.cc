#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<int> tear;
		
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int level;
		cin >> level;
		if (level == 300)
			tear.push_back(1);
		else if (level < 300 && level >= 275)
			tear.push_back(2);
		else if (level < 275 && level >= 250)
			tear.push_back(3);
		else if (level < 250)
			tear.push_back(4);
	}
	cout << tear[0];
	for (int i = 1; i < tear.size(); ++i)
		cout << " " << tear[i];
	cout << '\n';

	return 0;
}