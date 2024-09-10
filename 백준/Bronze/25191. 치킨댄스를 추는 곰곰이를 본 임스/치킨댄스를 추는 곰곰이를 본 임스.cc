#include <iostream>

using namespace std;

int main()
{
	int chicken;
	int drink, coke;

	cin >> chicken;
	cin >> drink >> coke;

	int withChicken = drink / 2;
	withChicken += coke;
	if (chicken < withChicken)
		cout << chicken << "\n";
	else
		cout << withChicken << "\n";

	return 0;
}