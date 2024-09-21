#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>

using namespace std;

bool compare(pair<long long, int>& a, pair<long long, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else return a.second > b.second;
}

long long getAverage(vector<long long> arr)
{
	int size = arr.size();
	long long sum = 0;

	for (const auto& e : arr)
		sum += e;
	sum = round((double)sum / (double)size);
	return sum;
}

long long getMode(unordered_map<long long, int> uMap)
{
	int max = 0;
	long long maxVal = 0;
	vector<pair<long long, int>> checkLots;

	for (const auto& it : uMap)
		checkLots.push_back(make_pair(it.first, it.second));
	sort(checkLots.begin(), checkLots.end(), compare);
	if (checkLots.size() == 1 || checkLots[0].second != checkLots[1].second)
		return checkLots[0].first;
	return checkLots[1].first;
	/*if (checkLots.size() == 1)
		return checkLots[0].first;
	else if (checkLots.size() == 2)
		return checkLots[0].first;
	else
	{
		for (int i = 0; i < checkLots.size() - 1; ++i)
		{
			if (checkLots[i].second == checkLots[i + 1].second)
			{
				maxVal = checkLots[i + 1].first;
				break;
			}
		}
	}*/
	/*return maxVal;*/
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<long long> num;
	unordered_map<long long, int> numCnt;

	long long n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		long long tmp;
		cin >> tmp;
		num.push_back(tmp);
		numCnt[tmp]++;
	}
	cout << getAverage(num) << '\n';

	sort(num.begin(), num.end());
	cout << num[(num.size() - 1) / 2] << '\n';

	cout << getMode(numCnt) << '\n';
	if (num.size() == 1)
		cout << "0" << '\n';
	else
		cout << abs(num[num.size() - 1] - num[0]) << '\n';

	return 0;
}