#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int candidate;

	cin >> candidate;
	for (int i = 0; i < candidate; ++i)
	{
		int vote;
		int fiveCnt = 0;
		int lastCnt = 0;
		cin >> vote;

		fiveCnt = vote / 5;
		lastCnt = vote % 5;
		for (int j = 0; j < fiveCnt; ++j)
		{
			cout << "++++";
			if (j != fiveCnt - 1 || lastCnt != 0)
				cout << " ";
		}
		for (int j = 0; j < lastCnt; ++j)
			cout << "|";
		cout << "\n";
	}
	return 0;
}