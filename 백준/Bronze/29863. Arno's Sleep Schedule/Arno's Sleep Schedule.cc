#include <iostream>

using namespace std;

int main()
{
	int sleep;
	int wakeup;

	cin >> sleep;
	cin >> wakeup;
	if (sleep < wakeup)
		cout << wakeup - sleep << "\n";
	else
		cout << 24 - sleep + wakeup << "\n";

	return 0;
}