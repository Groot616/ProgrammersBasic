#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;
	cin.ignore();
	queue<int> waiting;
	int maxSize = 0;
	int minStudent = 999999;

	for (int i = 0; i < n; ++i)
	{
		string orderNum;
		getline(cin, orderNum);
		stringstream ss(orderNum);
		string order;
		int num;
		ss >> order >> num;
		if (order == "1")
		{
			waiting.push(num);
			if (waiting.size() > maxSize)
			{
				maxSize = waiting.size();
				minStudent = num;
			}
			else if (waiting.size() == maxSize)
				minStudent = min(minStudent, num);
		}
		else if (order == "2")
		{
			if (!waiting.empty())
				waiting.pop();
		}
	}
	cout << maxSize << " " << minStudent << '\n';

	return 0;
}