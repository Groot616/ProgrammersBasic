#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int N;
	vector<pair<int, string>> grade(10);
	grade[0] = make_pair(11, "A B C D E F G H J L M");
	grade[1] = make_pair(9, "A C E F G H I L M");
	grade[2] = make_pair(9, "A C E F G H I L M");
	grade[3] = make_pair(9, "A B C E F G H L M");
	grade[4] = make_pair(8, "A C E F G H L M");
	grade[5] = make_pair(8, "A C E F G H L M");
	grade[6] = make_pair(8, "A C E F G H L M");
	grade[7] = make_pair(8, "A C E F G H L M");
	grade[8] = make_pair(8, "A C E F G H L M");
	grade[9] = make_pair(8, "A B C F G H L M");

	cin >> N;
	for (int i = 1; i <= N; ++i)
	{
		if (i == N)
		{
			cout << grade[i - 1].first << "\n";
			cout << grade[i - 1].second << "\n";
		}
	}
	
	return 0;
}