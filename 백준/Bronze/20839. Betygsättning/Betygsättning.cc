#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	float stndA, stndC, stndE;
	float score1, score2, score3;

	cin >> stndA >> stndC >> stndE;
	cin >> score1 >> score2 >> score3;

	if (score1 == stndA && score2 == stndC && score3 == stndE)
		cout << 'A' << '\n';
	else if (score1 >= stndA / 2 && score2 == stndC && score3 == stndE)
		cout << 'B' << '\n';
	else if (score2 == stndC && score3 == stndE)
		cout << 'C' << '\n';
	else if (score2 >= stndC / 2 && score3 == stndE)
		cout << 'D' << '\n';
	else
		cout << 'E' << '\n';

	return 0;
}