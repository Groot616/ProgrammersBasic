#include <iostream>

using namespace std;

int main()
{
	int answer = 0;
	int pmt;
	int usedPmt;
	int eggplant;

	cin >> pmt;
	cin >> usedPmt;
	cin >> eggplant;

	answer = (usedPmt / pmt) * eggplant;
	cout << answer << "\n";

	return 0;
}