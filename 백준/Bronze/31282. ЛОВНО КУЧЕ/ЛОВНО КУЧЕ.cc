#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int step;
	int rabbitSpeed;
	int wolfSpeed;

	cin >> step >> rabbitSpeed >> wolfSpeed;
	int rabbitPos = step;
	int wolfPos = 0;
	int cnt = 0;
	while (true)
	{
		rabbitPos += rabbitSpeed;
		wolfPos += wolfSpeed;
		if (wolfPos < rabbitPos)
			++cnt;
		else
		{
			++cnt;
			break;
		}
	}
	cout << cnt << "\n";

	return 0;
}