#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#include <numeric>
#include <algorithm>

using namespace std;

int combination(int n, int k)
{
	// 6 5 4 3 2 1
	// 3 2 1 3 2 1
	int retVal = 1;
	for (int i = 1; i <= k; ++i)
		retVal *= (n - k + i) / i;
	return retVal;
}

void makeInfo(unordered_map<string, vector<string>>& fashion)
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		string fashionInfo;
		getline(cin, fashionInfo);
		stringstream ss(fashionInfo);
		string name, pos;
		ss >> name >> pos;
		fashion[pos].push_back(name);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int test;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		long long answer = 1;
		unordered_map<string, vector<string>> fashion;
		makeInfo(fashion);
		vector<int> totalCnt;
		for (auto cloth : fashion)
			totalCnt.push_back(cloth.second.size() + 1); // 입지 않는 경우도 포함
		
		int n = totalCnt.size();
		for (int i = 0; i < n; ++i)
			answer *= totalCnt[i];
		// 최종적으로 모두 안입은 단 하나의 경우 -1
		cout << answer - 1 << '\n';
	}

	return 0;
}