#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int test;
	vector<long long> money;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int n;
		bool good = true;

		cin >> n;
		for (int j = 0; j < n; ++j)
		{
			long long tmp;
			cin >> tmp;
			money.push_back(tmp);
		}
		for (int j = 1; j < money.size(); ++j)
		{
			if (money[j] < 2 * money[j - 1])
			{
				good = false;
				break;
			}
		}

		if (good)
		{
			cout << "Denominations: " << money[0];
			for (int j = 1; j < money.size(); ++j)
				cout << " " << money[j];
			cout << '\n';
			cout << "Good coin denominations!";
		}
		else
		{
			cout << "Denominations: " << money[0];
			for (int j = 1; j < money.size(); ++j)
				cout << " " << money[j];
			cout << '\n';
			cout << "Bad coin denominations!";
		}
		money.clear();
		if (i != test - 1)
			cout << '\n' << '\n';
	}

	return 0;
}