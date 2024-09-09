#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	vector<pair<int, int>> grade(11);

	grade[0] = make_pair(12, 1600);
	grade[1] = make_pair(11, 894);
	grade[2] = make_pair(11, 1327);
	grade[3] = make_pair(10, 1311);
	grade[4] = make_pair(9, 1004);
	grade[5] = make_pair(9, 1178);
	grade[6] = make_pair(9, 1357);
	grade[7] = make_pair(8, 837);
	grade[8] = make_pair(7, 1055);
	grade[9] = make_pair(6, 556);
	grade[10] = make_pair(6, 773);

	cin >> N;
	for (int i = 1; i <= N; ++i)
	{
		if (i == N)
			cout << grade[i - 1].first << " " << grade[i - 1].second << "\n";
	}

	return 0;
}