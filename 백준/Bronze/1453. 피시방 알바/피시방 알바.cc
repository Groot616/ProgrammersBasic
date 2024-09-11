#include <iostream>
#include <set>

using namespace std;

int main()
{
	int customer;
	set<int> pc;
	int cnt = 0;

	cin >> customer;
	for (int i = 0; i < customer; ++i)
	{
		int hope = 0;
		cin >> hope;
		if (pc.empty())
			pc.insert(hope);
		else
		{
			auto it = pc.find(hope);
			if (it != pc.end())
				++cnt;
			else
				pc.insert(hope);
		}
	}
	cout << cnt << "\n";
	
	return 0;
}