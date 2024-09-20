#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int test;
	
	cin >> test;
	int cnt = 0;
	int min = 99999999;
	for (int i = 0; i < test; ++i)
	{
		int arriveTime;
		int getBread;
		cin >> arriveTime >> getBread;
		
		if (getBread >= arriveTime)
		{
			++cnt;
			if (getBread <= min)
				min = getBread;
		}
	}
	cnt == 0 ? answer = -1 : answer = min;
	cout << answer << '\n';

	return 0;
}