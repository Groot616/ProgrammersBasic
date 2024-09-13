#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	
	cin >> a >> b;
	
	cout << fixed;
	cout.precision(0);
	cout << pow(a, 2) * (1 + a + b) << "\n";

	return 0;
}