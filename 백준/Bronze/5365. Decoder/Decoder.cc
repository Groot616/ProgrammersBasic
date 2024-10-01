#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string answer = "";
	int n;
	string str;
	vector<string> arr;

	cin >> n;
	cin.ignore();
	getline(cin, str);
	stringstream ss(str);
	string word = "";
	while (getline(ss, word, ' '))
		arr.push_back(word);

	answer += arr[0][0];
	for (int i = 1; i < arr.size(); ++i)
	{
		if (arr[i - 1].length() <= arr[i].length())
			answer += arr[i][arr[i - 1].length() - 1];
		else
			answer += ' ';
	}
	cout << answer << '\n';

	return 0;
}