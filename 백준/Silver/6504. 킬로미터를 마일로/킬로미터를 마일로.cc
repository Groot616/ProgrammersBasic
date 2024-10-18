#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compair(pair<int, bool>& a, pair<int, bool>& b)
{
	return a.first > b.first;
}

vector<pair<int, bool>> makeFibonacci(int km)
{
	vector<pair<int, bool>> fiboBin = { {1, false}, {2, false} };

	int nextNum;
	int idx = 1;
	while (true)
	{
		nextNum = fiboBin[idx].first + fiboBin[idx - 1].first;
		if (nextNum > km)
			break;
		else
		{
			fiboBin.push_back(make_pair(fiboBin[idx].first + fiboBin[idx - 1].first, false));
			++idx;
		}
	}

	return fiboBin;
}

void findSumBool(vector<pair<int, bool>> &fiboBin, int km)
{
	for (int i = fiboBin.size() - 1; i >= 1; --i)
	{
		int sum = 0;
		sum += fiboBin[i].first;
		fiboBin[i].second = true;
		for (int j = i - 1; j >= 0; --j)
		{
			if (sum + fiboBin[j].first <= km)
			{
				sum += fiboBin[j].first;
				fiboBin[j].second = true;
			}

			if (sum == km)
				break;
		}
		if (sum == km)
			break;
	}
	sort(fiboBin.begin(), fiboBin.end(), compair);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int answer = 0;
		int km;
		vector<pair<int, bool>> fiboBin;

		cin >> km;
		fiboBin = makeFibonacci(km);
		findSumBool(fiboBin, km);

		for (int i = fiboBin.size() - 2; i >= 0; --i)
			fiboBin[i + 1].second = fiboBin[i].second;
		for (int i = fiboBin.size() - 1; i >= 1; --i)
		{
			if (fiboBin[i].second == true)
				answer += fiboBin[i].first;
		}
		cout << answer << '\n';
	}

	return 0;
}