#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int wave;

	cin >> wave;
	if (wave >= 620 && wave <= 780)
		cout << "Red";
	else if(wave >= 590 && wave < 620)
		cout << "Orange";
	else if (wave >= 570 && wave < 590)
		cout << "Yellow";
	else if (wave >= 495 && wave < 570)
		cout << "Green";
	else if (wave >= 450 && wave < 495)
		cout << "Blue";
	else if (wave >= 425 && wave < 450)
		cout << "Indigo";
	else if (wave >= 380 && wave < 425)
		cout << "Violet";

	return 0;
}