#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	string room;

	cin >> room;
	map<int, int> set;
	for (int i = 0; i < room.length(); ++i)
		set[room[i] - '0']++;

	int six = 0;
	int nine = 0;
	int least69 = 0;
	for (auto it = set.begin(); it != set.end(); ++it)
	{
		if (it->first == 6)
			six = it->second;
		else if (it->first == 9)
			nine = it->second;
	}
	if ((six + nine) % 2 == 1)
		least69 = (six + nine) / 2 + 1;
	else
		least69 = (six + nine) / 2;

	int max = 0;
	if (six + nine == room.length())
	{
		cout << least69 << "\n";
		return 0;
	}
	else
	{
		for (auto it = set.begin(); it != set.end(); ++it)
		{
			if(it->first != 6 && it->first != 9)
				if (max < it->second)
					max = it->second;
		}
		if (max < least69)
			cout << least69 << "\n";
		else
			cout << max << "\n";
	}

	return 0;
}