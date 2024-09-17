#include <iostream>
#include <unordered_map>

using namespace std;

int getScore(char object, int cnt)
{
	if (object == '.')
		return 0;
	else if (object == 'K' || object == 'k')
		return 0;
	else if (object == 'P' || object == 'p')
	{
		if (object == 'P') return 1 * cnt;
		else return -1 * cnt;
	}
	else if (object == 'N' || object == 'n')
	{
		if (object == 'N') return 3 * cnt;
		else return -3 * cnt;
	}
	else if (object == 'B' || object == 'b')
	{
		if (object == 'B') return 3 * cnt;
		else return -3 * cnt;
	}
	else if (object == 'R' || object == 'r')
	{
		if (object == 'R') return 5 * cnt;
		else return -5 * cnt;
	}
	else if (object == 'Q' || object == 'q')
	{
		if (object == 'Q') return 9 * cnt;
		else return -9 * cnt;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int answer = 0;
	unordered_map<char, int> chessBoard;

	for (int i = 0; i < 8; ++i)
	{
		string tmp;
		cin >> tmp;
		for(int j=0; j<8; ++j)
			chessBoard[tmp[j]]++;
	}
	
	for (auto it = chessBoard.begin(); it != chessBoard.end(); ++it)
		answer += getScore(it->first, it->second);

	cout << answer;

	return 0;
}