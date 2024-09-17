#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string answer = "";
	string userInfo;

	getline(cin, userInfo);
	stringstream ss(userInfo);
	string solved;
	string unionLevel;
	string maxLevel;
	ss >> solved >> unionLevel >> maxLevel;

	if (stoi(solved) >= 1000)
	{
		if (stoi(unionLevel) >= 8000 || stoi(maxLevel) >= 260)
			answer = "Very Good";
		else
			answer = "Good";
	}
	else
		answer = "Bad";
	cout << answer << '\n';

	return 0;
}