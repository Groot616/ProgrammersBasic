#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long coconuts;

	while (true)
	{
		cin >> coconuts;
		if (coconuts == -1)
			break;

		int person = 0;
		for (int i = 2; i < coconuts; ++i)
		{
			int copyCoconuts = coconuts;
			bool bFind = true;
			
			for (int j = 0; j < i; ++j)
			{
				copyCoconuts -= 1;
				if (copyCoconuts % i == 0)
					copyCoconuts = (copyCoconuts * (i - 1)) / i;
				else
				{
					bFind = false;
					break;
				}
			}
			if (bFind == true && copyCoconuts % i == 0)
				person = i;
		}

		if(person < 2)
			cout << coconuts << " coconuts, no solution" << '\n';
		else
			cout << coconuts << " coconuts, " << person << " people and 1 monkey" << '\n';

	}

	return 0;
}