#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	if (n <= 5)
		cout << n << "\n";
	else
	{
		n -= 5;
		int check = n % 8;
		switch (check)
		{
		case 0:
			cout << "5" << "\n";
			break;
		case 1:
			cout << "4" << "\n";
			break;
		case 2:
			cout << "3" << "\n";
			break;
		case 3:
			cout << "2" << "\n";
			break;
		case 4:
			cout << "1" << "\n";
			break;
		case 5:
			cout << "2" << "\n";
			break;
		case 6:
			cout << "3" << "\n";
			break;
		case 7:
			cout << "4" << "\n";
			break;
		default:
			break;
		}
	}
}