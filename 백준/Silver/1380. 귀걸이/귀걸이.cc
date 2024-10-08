#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void insertName(vector<string>& vecName)
{
	string strName;
	getline(cin, strName);
	vecName.push_back(strName);
}

void insertStudentNum(vector<pair<int, char>> &vecStudentNum)
{
	string input;
	getline(cin, input);
	stringstream ss(input);

	int num;
	char ch;

	ss >> num >> ch;
	vecStudentNum.push_back(make_pair(num, ch));
}

vector<bool> findStudent(const vector<string> vecName, const vector<pair<int, char>> vecStudentNum)
{
	vector<bool> check(vecName.size(), false);

	for (int i = 0; i < vecStudentNum.size(); ++i)
	{
		if (check[vecStudentNum[i].first - 1] == false)
			check[vecStudentNum[i].first - 1] = true;
		else
			check[vecStudentNum[i].first - 1] = false;
	}

	return check;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int senario = 1;

	while (true)
	{
		int n;
		cin >> n;
		cin.ignore();

		if (n == 0)
			break;

		vector<string> vecName;
		vector<pair<int, char>> vecStudentNum;
		vector<bool> answer;

		for (int i = 0; i < n; ++i)
			insertName(vecName);

		for (int i = 0; i < 2 * n - 1; ++i)
			insertStudentNum(vecStudentNum);

		answer = findStudent(vecName, vecStudentNum);
		for (int i = 0; i < answer.size(); ++i)
		{
			if (answer[i] == true)
			{
				cout << senario << " " << vecName[i] << '\n';
				++senario;
			}
		}
	}

	return 0;
}