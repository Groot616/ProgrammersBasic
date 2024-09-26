#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int company, cnt;
	unordered_map<int, int> companyPos;

	cin >> company >> cnt;
	for (int i = 0; i < company; ++i)
	{
		int pos;

		cin >> pos;
		companyPos[i + 1] = pos;
	}
	for (int i = 0; i < cnt; ++i)
	{
		int check, comp1, comp2;

		cin >> check >> comp1 >> comp2;
		if (check == 1)
		{
			auto it = companyPos.find(comp1);
			if (it != companyPos.end())
				it->second = comp2;
		}
		else
		{
			auto it1 = companyPos.find(comp1);
			auto it2 = companyPos.find(comp2);
			if (it1 != companyPos.end() && it2 != companyPos.end())
				cout << abs(it1->second - it2->second) << '\n';
		}
	}

	return 0;
}