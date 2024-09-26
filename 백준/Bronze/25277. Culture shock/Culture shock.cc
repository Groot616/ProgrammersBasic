#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int n;
	string str;

	cin >> n;
	cin.ignore();
	getline(cin, str);
	stringstream ss(str);
	string word = "";
	while (getline(ss, word, ' '))
	{
		if (word == "he" || word == "she" || word == "him" || word == "her")
			answer += 1;
	}
	cout << answer << '\n';

	return 0;
}