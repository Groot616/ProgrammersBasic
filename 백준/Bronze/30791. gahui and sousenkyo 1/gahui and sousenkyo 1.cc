#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	vector<int> vecScore;

	for (int i = 0; i < 5; ++i)
	{
		int score;
		cin >> score;
		vecScore.push_back(score);
	}

	for (int i = 1; i < 5; ++i)
	{
		if (abs(vecScore[0] - vecScore[i]) <= 1000)
			++answer;
	}
	cout << answer << '\n';

	return 0;
}