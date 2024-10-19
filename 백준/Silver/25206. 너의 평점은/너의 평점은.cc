#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	const unordered_map<string, double> gradeInfo = {
		{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}
	};

	vector<pair<string, string>> scoreInfo;
	double totalScore = 0;
	double sumScore = 0;

	for (int i = 0; i < 20; ++i)
	{
		string totalInfo;
		
		getline(cin, totalInfo);
		stringstream ss(totalInfo);
		string subject, score, grade;
		ss >> subject >> score >> grade;
		if(grade != "P")
			scoreInfo.push_back(make_pair(score, grade));
	}

	for (int i = 0; i < scoreInfo.size(); ++i)
	{
		auto it = gradeInfo.find(scoreInfo[i].second);
		if (it != gradeInfo.end())
		{
			double score = stod(scoreInfo[i].first);
			totalScore += score * it->second;
			sumScore += score;
		}
	}
	cout << fixed;
	cout.precision(6);
	cout << totalScore / sumScore << '\n';

	return 0;
}