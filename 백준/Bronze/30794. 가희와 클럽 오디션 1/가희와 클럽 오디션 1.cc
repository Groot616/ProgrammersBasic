#include <iostream>
#include <string>

using namespace std;

int main()
{
	int answer = 0;
	int lv;
	string judge;

	cin >> lv >> judge;
	if (judge == "miss")
		answer = 0;
	else if (judge == "bad")
		answer = 200 * lv;
	else if (judge == "cool")
		answer = 400 * lv;
	else if (judge == "great")
		answer = 600 * lv;
	else
		answer = 1000 * lv;
	cout << answer << "\n";

	return 0;
}