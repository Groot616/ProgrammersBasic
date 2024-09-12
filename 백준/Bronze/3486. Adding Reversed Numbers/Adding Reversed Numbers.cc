#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string str1, str2;
		string answer = "";
		cin >> str1 >> str2;
		
		reverse(str1.begin(), str1.end());
		reverse(str2.begin(), str2.end());
		int tmp = stoi(str1) + stoi(str2);
		answer = to_string(tmp);
		reverse(answer.begin(), answer.end());
		cout << stoi(answer) << "\n";
	}

	return 0;
}