#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int totalHour = 0;
	int totalMin = 0;
	int totalSec = 0;
	vector<int> total(2, 0);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		stringstream ss(str);
		string word;
		int idx = 0;
		while (getline(ss, word, ':'))
		{
			total[idx] += stoi(word);
			++idx;
		}
		totalMin = total[0];
		totalSec = total[1];
	}
	totalMin += totalSec / 60;
	totalSec %= 60;
	totalHour += totalMin / 60;
	totalMin %= 60;
	cout << setfill('0') << setw(2) << totalHour << ":" << setfill('0') << setw(2) <<  totalMin << ":" << setfill('0') << setw(2) << totalSec << '\n';

	return 0;
}