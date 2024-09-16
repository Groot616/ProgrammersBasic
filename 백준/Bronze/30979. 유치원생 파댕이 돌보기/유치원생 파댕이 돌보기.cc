#include <iostream>
#include <string>

using namespace std;

int main()
{
	string answer = "Padaeng_i ";
	int time;
	int candyCnt;

	cin >> time;
	cin >> candyCnt;
	int sum = 0;
	for (int i = 0; i < candyCnt; ++i)
	{
		int stopCry = 0;
		cin >> stopCry;
		sum += stopCry;
	}
	if (sum >= time)
		answer += "Happy";
	else
		answer += "Cry";

	cout << answer << "\n";

	return 0;
}