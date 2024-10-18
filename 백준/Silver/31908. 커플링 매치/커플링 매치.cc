#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void makePair(int n, vector<pair<string, pair<string, int>>> &nameRingCnt)
{
	for (int i = 0; i < n; ++i)
	{
		bool bFind = false;
		string name_ring;
		getline(cin, name_ring);
		stringstream ss(name_ring);
		string name, ring;
		ss >> name >> ring;

		if (ring == "-")
			continue;
		else if (nameRingCnt.size() != 0)
		{
			int size = nameRingCnt.size();
			for (int j = 0; j < size; ++j)
			{
				if (nameRingCnt[j].second.first == ring)
				{
					nameRingCnt[j].second.second += 1;
					nameRingCnt.push_back(make_pair(name, make_pair(ring, nameRingCnt[j].second.second)));
					bFind = true;
				}
			}
			if (!bFind)
				nameRingCnt.push_back(make_pair(name, make_pair(ring, 1)));
		}
		else
			nameRingCnt.push_back(make_pair(name, make_pair(ring, 1)));
	}
}

void findPair(const vector<pair<string, pair<string, int>>> nameRingCnt)
{
	int couple = 0;
	vector<pair<string, string>> coupleName;
	
	for (int i = 0; i < nameRingCnt.size(); ++i)
	{
		if (nameRingCnt[i].second.second == 2)
		{
			string ringName = nameRingCnt[i].second.first;
			for (int j = i + 1; j < nameRingCnt.size(); ++j)
			{
				if (nameRingCnt[j].second.first == ringName)
				{
					++couple;
					coupleName.push_back(make_pair(nameRingCnt[i].first, nameRingCnt[j].first));
				}
			}
		}
	}

	if (couple != 0)
	{
		cout << couple << '\n';
		for (const auto& e : coupleName)
			cout << e.first << " " << e.second << '\n';
	}
	else
		cout << "0" << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<pair<string, pair<string, int>>> nameRingCnt;

	cin >> n;
	cin.ignore();

	makePair(n, nameRingCnt);
	findPair(nameRingCnt);

	return 0;
}