#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int test;
	queue<pair<int, int>> printMachine;
	vector<int> getMax;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int docCnt;
		int numIdx;
		int max = 0;
		cin >> docCnt >> numIdx;
		for (int j = 0; j < docCnt; ++j)
		{
			int tmp;
			cin >> tmp;
			if (tmp > max)
				max = tmp;
			printMachine.push(make_pair(tmp, j));
			getMax.push_back(tmp);
		}

		sort(getMax.rbegin(), getMax.rend());
		int k = 0;
		int cnt = 0;
		while (true)
		{
			if (printMachine.front().first != getMax[k] && printMachine.size() == docCnt)
			{
				pair<int, int> tmp = make_pair(printMachine.front().first, printMachine.front().second);
				printMachine.pop();
				printMachine.push(tmp);
			}
			else
			{
				if (printMachine.front().second == numIdx)
				{
					++cnt;
					break;
				}
				else
				{
					printMachine.pop();
					--max;
					--docCnt;
					++cnt;
					++k;
				}
			}
		}
		cout << cnt << '\n';
		while (!printMachine.empty())
			printMachine.pop();
		getMax.clear();
	}

	return 0;
}