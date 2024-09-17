#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// 2023-10-21보다 35일 앞선 날인지 판별하는 프로그램
	// 입력 yyyy-mm-dd
	// 앞선 날이면 good, 그렇지 않으면 too late
	string answer = "";
	string date;

	cin >> date;
	vector<int> vecDate;
	stringstream ss(date);
	string word = "";
	while (getline(ss, word, '-'))
		vecDate.push_back(stoi(word));

	if (vecDate[1] >= 10)
		answer = "TOO LATE";
	else
	{
		if (vecDate[1] == 9 && vecDate[2] > 16)
			answer = "TOO LATE";
		else
			answer = "GOOD";
	}
	cout << answer << '\n';

	return 0;
}