#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int horizontal = 0, vertical = 0;
	cin >> n;

	vector<string> room(n);
	for (int i = 0; i < n; ++i)
		cin >> room[i];

	for (int i = 0; i < n; ++i)
	{
		stringstream ss(room[i]);
		string word = "";
		while (getline(ss, word, 'X'))
			if (word.length() >= 2)
				++horizontal;
	}

	for (int i = 0; i < n; ++i)
	{
		string col = "";
		for (int j = 0; j < n; ++j)
			col += room[j][i];

		stringstream ss(col);
		string word = "";
		while (getline(ss, word, 'X'))
			if (word.length() >= 2)
				++vertical;
	}
	cout << horizontal << " " << vertical << '\n';

	return 0;
}