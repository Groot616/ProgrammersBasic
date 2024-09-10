#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int pos1, pos2;
	int posXMax;
	int x, y;

	cin >> pos1 >> pos2;
	if (pos1 > pos2)
	{
		int tmp = pos1;
		pos1 = pos2;
		pos2 = tmp;
	}
	
	int getXPos = pos2 % 4;
	if (pos2 % 4 != 0)
		posXMax = pos2 + (4 - getXPos);
	else
		posXMax = pos2;
	x = (posXMax - pos1) / 4;
	y = abs(pos1 + (x * 4) - pos2);

	cout << x + y << "\n";

	return 0;
}