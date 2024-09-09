#include <iostream>

using namespace std;

int main()
{
	float middle;
	float end;

	cin >> middle >> end;
	if (middle >= end / 2)
		cout << "E";
	else
		cout << "H";

	return 0;
}