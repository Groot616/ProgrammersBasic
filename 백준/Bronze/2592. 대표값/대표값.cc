#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, int> numCnt;
	int average = 0;

	for (int i = 0; i < 10; ++i)
	{
		int input;
		cin >> input;
		numCnt[input]++;
	}
	int max = 0;
	for (auto it = numCnt.begin(); it != numCnt.end(); ++it)
	{
		average += it->first * it->second;
		if (it->second > max)
			max = it->second;
	}
	for (auto it = numCnt.begin(); it != numCnt.end(); ++it)
	{
		if (it->second == max)
			max = it->first;
	}
	cout << average / 10 << "\n";
	cout << max << "\n";
	
	return 0;
}