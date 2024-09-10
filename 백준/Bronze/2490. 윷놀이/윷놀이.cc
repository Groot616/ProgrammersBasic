#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c, d;
	int sum = 0;

	for (int i = 0; i < 3; ++i)
	{
		cin >> a >> b >> c >> d;
		sum = a + b + c + d;
		switch (sum)
		{
		case 0:
			cout << "D" << "\n";
			break;
		case 1:
			cout << "C" << "\n";
			break;
		case 2:
			cout << "B" << "\n";
			break;
		case 3:
			cout << "A" << "\n";
			break;
		case 4:
			cout << "E" << "\n";
			break;
		default:
			break;
		}
	}
	
	return 0;
}