#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int liter;
	int time;

	cin >> liter;
	cin >> time;
	int p1, p2;
	p1 = time;
	p2 = liter - time;

	cout << abs(p1 - p2) << '\n';


	return 0;
}