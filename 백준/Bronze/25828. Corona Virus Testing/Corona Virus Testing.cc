#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int g, p, t;
	int solo, group;

	cin >> g >> p >> t;
	solo = g * p;
	group = g + p * t;
	if (solo < group)
		cout << '1' << '\n';
	else if (solo > group)
		cout << '2' << '\n';
	else
		cout << '0' << '\n';

	return 0;
}