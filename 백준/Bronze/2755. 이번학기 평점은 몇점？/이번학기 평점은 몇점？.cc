#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

float getScore(float n, char ch)
{
	if (ch == '+') return n + 0.3;
	else if (ch == '0') return n;
	else if (ch == '-') return n - 0.3;
}

float getGrade(string grade)
{
	if (grade == "F")
		return 0.f;

	vector<char> alpha = { 'A', 'B', 'C', 'D', 'F' };
	for (int i = 0; i < alpha.size(); ++i)
	{
		if (grade[0] == alpha[i])
			return getScore(float(alpha.size() - 1 - i), grade[1]);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	float average = 0;
	float totalCredit = 0;

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		string str;

		getline(cin, str);
		stringstream ss(str);
		string subject, credit, grade;
		ss >> subject >> credit >> grade;
		average += stof(credit) * getGrade(grade);
		totalCredit += stof(credit);
	}
	float answer = round(average / totalCredit * 100.f) / 100.f;
	cout << fixed << setprecision(2) << answer << '\n';

	return 0;
}