#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int answer = 0;
	float STR, DEX, INT, LUCK;
	float n;

	cin >> STR >> DEX >> INT >> LUCK >> n;
	float sumState = STR + DEX + INT + LUCK;
	float average = floor(sumState / 4);
	if (average >= n)
		answer = 0;
	else
		answer = 4 * n - sumState;

	cout << answer << "\n";

	return 0;
}