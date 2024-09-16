#include <iostream>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int answer = 0;
	int n;
	int k;

	cin >> n >> k;
	unordered_map<int, int> nMap;
	unordered_map<int, int> kMap;
	unordered_map<int, int> nkMap;

	for (int i = 0; i < n; ++i)
		nMap[i + 1]++;
	for (int i = 0; i < k; ++i)
		kMap[i + 1]++;
	for (int i = 0; i < n - k; ++i)
		nkMap[i + 1]++;

	for (auto itN = nMap.begin(); itN != nMap.end(); ++itN)
	{
		for (auto itK = kMap.begin(); itK != kMap.end(); ++itK)
		{
			if (itN->first == itK->first && itK->second != 0)
			{
				itN->second -= 1;
				itK->second = 0;
			}
		}
		for (auto itNK = nkMap.begin(); itNK != nkMap.end(); ++itNK)
		{
			if (itN->first == itNK->first && itNK->second != 0)
			{
				itN->second -= 1;
				itNK->second = 0;
			}
		}
	}

	int mul = 1;
	int div = 1;
	for (const auto& e : nMap)
	{
		if (e.second == 1)
			mul *= e.first;
		else if (e.second == 0)
			continue;
		else
			div *= e.first;
	}
	answer = mul / div;
	cout << answer << "\n";
}