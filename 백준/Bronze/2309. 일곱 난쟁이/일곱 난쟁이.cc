#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> answer;
	vector<pair<int, int>> lengthIdx;
	for (int i = 0; i < 9; ++i)
	{
		int length;
		cin >> length;
		lengthIdx.push_back(make_pair(length, i));
	}
	int sum = accumulate(lengthIdx.begin(), lengthIdx.end(), 0,
		[](int acc, const pair<int, int>& p)
		{
			return acc + p.first;
		});

	bool findAnswer = false;
	int lier1, lier2;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 1 + i; j < 9; ++j)
		{
			if (sum - lengthIdx[i].first - lengthIdx[j].first == 100)
			{
				lier1 = lengthIdx[i].second;
				lier2 = lengthIdx[j].second;
				findAnswer = true;
				break;
			}
		}
		if (findAnswer)
			break;
	}
	for (int i = 0; i < 9; i++)
	{
		if (i != lier1 && i != lier2)
			answer.push_back(lengthIdx[i].first);
	}
	sort(answer.begin(), answer.end());

	for (const auto& e : answer)
		cout << e << "\n";

	return 0;
}