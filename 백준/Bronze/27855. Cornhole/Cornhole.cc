#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int player1In, player1Out;
	int player2In, player2Out;
	int score1, score2;

	cin >> player1In >> player1Out;
	cin >> player2In >> player2Out;
	score1 = 3 * player1In + player1Out;
	score2 = 3 * player2In + player2Out;
	if (score1 > score2)
		cout << "1 " << score1 - score2 << '\n';
	else if (score1 < score2)
		cout << "2 " << score2 - score1 << '\n';
	else
		cout << "NO SCORE" << '\n';

	return 0;
}