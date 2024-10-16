#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void makeVector(string str, vector<vector<char>>& message)
{
	for (int i = 0; i < message.size(); ++i)
	{
		for (int j = 0; j < message.size(); ++j)
			message[i].push_back(str[i * message.size() + j]);
	}
}

void rotateVector(vector<vector<char>>& message)
{
	// 00 01 02   20 10 00
	// 10 11 12   21 11 01
	// 20 21 22   22 11 02

	// 00 01 02 03	03 13 23 33
	// 10 11 12 13	02 12 22 32
	// 20 21 22 23	01 11 21 31
	// 30 31 32 33	00 10 20 30
	vector<vector<char>> retVec = message;
	for (int i = 0; i < message.size(); ++i)
	{
		for (int j = 0; j < message[i].size(); ++j)
			retVec[i][j] = message[j][message.size() - 1 - i];
	}
	message = retVec;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string answer = "";
		string str;
		vector<vector<char>> message;

		cin >> str;
		message.resize(sqrt(str.length()));
		makeVector(str, message);
		rotateVector(message);
		
		for (const auto& e1 : message)
			for (const auto& e2 : e1)
				answer += e2;
		cout << answer << '\n';
	}
	
	return 0;
}