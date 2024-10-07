#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int r, c;
	vector<string> park;
	unordered_map<char, int> geometry;
	vector<int> myParking(5, 0);

	cin >> r >> c;
	for (int i = 0; i < r; ++i)
	{
		string tmp;
		cin >> tmp;
		park.push_back(tmp);
	}

	int startX = 0;
	int startY = 0;
	for (int i = 0; i < r - 1; ++i)
	{
		for (int j = 0; j < c - 1; ++j)
		{
			for (int k = startX; k < startX + 2; ++k)
			{
				for (int l = startY; l < startY + 2; ++l)
				{
					geometry[park[l][k]]++;
				}
			}
			for (auto it = geometry.begin(); it != geometry.end(); ++it)
			{
				if (geometry.find('#') != geometry.end())
					break;
				else if (it->first == 'X' && it->second == 4)
					myParking[4] += 1;
				else if (it->first == 'X' && it->second != 4)
					continue;
				else
				{
					int empty = it->second;
					if (empty == 4)
						myParking[0] += 1;
					else if (empty == 3)
						myParking[1] += 1;
					else if (empty == 2)
						myParking[2] += 1;
					else if (empty == 1)
						myParking[3] += 1;
				}
			}
			geometry.clear();
			startX += 1;
		}
		startY += 1;
		startX = 0;
	}
	for (const auto& e : myParking)
		cout << e << '\n';

	return 0;
}