#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int getNums(string str)
{
	string retNum = "";

	vector<string> strs;
	stringstream ss(str);
	string nums;
	while (getline(ss, nums, ':'))
		strs.push_back(nums);
	for (const auto& e : strs)
		retNum += e;
	return stoi(retNum);
}

void changeVec(string str, vector<string>& vec)
{
	if (str.length() == 6)
	{
		vec[0] = str.substr(0, 2);
		vec[1] = str.substr(2, 2);
		vec[2] = str.substr(4, 2);
	}
	else if (str.length() == 5)
	{
		vec[0] = "0" + str.substr(0,1);
		vec[1] = str.substr(1, 2);
		vec[2] = str.substr(3, 2);
	}
	else if(str.length() == 4)
	{
		vec[0] = "00";
		vec[1] = str.substr(0, 2);
		vec[2] = str.substr(2, 2);
	}
	else if (str.length() == 3)
	{
		vec[0] = "00";
		vec[1] = "0" + str.substr(0, 1);
		vec[2] = str.substr(1, 2);
	}
	else if(str.length() == 2)
	{
		vec[0] = "00";
		vec[1] = "00";
		vec[2] = str.substr(0, 2);
	}
	else
	{
		vec[0] = "00";
		vec[1] = "00";
		vec[2] = "0" + str.substr(0, 1);
	}
}

int getCnt(int nTime1, int nTime2, vector<string> vecTime1, vector<string> vecTime2)
{
	int cnt = 0;
	int totalSecond;
	
	if (nTime1 < nTime2)
		totalSecond = 3600 * (stoi(vecTime2[0]) - stoi(vecTime1[0])) + 60 * (stoi(vecTime2[1]) - stoi(vecTime1[1])) + (stoi(vecTime2[2]) - stoi(vecTime1[2]));
	else
		totalSecond = 3600 * (stoi(vecTime2[0]) + 24 - stoi(vecTime1[0])) + 60 * (stoi(vecTime2[1]) - stoi(vecTime1[1])) + (stoi(vecTime2[2]) - stoi(vecTime1[2]));

	for (int i = 0; i <= totalSecond; ++i)
	{
		if (vecTime1[0].length() == 1) vecTime1[0] = "0" + vecTime1[0];
		if (vecTime1[1].length() == 1) vecTime1[1] = "0" + vecTime1[1];
		if (vecTime1[2].length() == 1) vecTime1[2] = "0" + vecTime1[2];
		string sumString = vecTime1[0] + vecTime1[1] + vecTime1[2];
		if (stoi(sumString) % 3 == 0) ++cnt;

		vecTime1[2] = to_string(stoi(vecTime1[2]) + 1);
		if (stoi(vecTime1[2]) == 60)
		{
			vecTime1[2] = "00";
			vecTime1[1] = to_string(stoi(vecTime1[1]) + 1);
			if (vecTime1[1] == "60")
			{
				vecTime1[1] = "00";
				vecTime1[0] = to_string(stoi(vecTime1[0]) + 1);
				if (vecTime1[1].length() == 1)vecTime1[1] = "0" + vecTime1[1];
			}
		}
	}

	return cnt;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;

	while (getline(cin, str))
	{
		stringstream ss(str);
		string totalTime1, totalTime2;
		ss >> totalTime1 >> totalTime2;

		int nTime1 = getNums(totalTime1);
		int nTime2 = getNums(totalTime2);
		string sTime1 = to_string(nTime1);
		string sTime2 = to_string(nTime2);
		vector<string> vecTime1(3);
		vector<string> vecTime2(3);
		changeVec(sTime1, vecTime1);
		changeVec(sTime2, vecTime2);
		
		if (nTime1 < nTime2)
			cout << getCnt(nTime1, nTime2, vecTime1, vecTime2) << '\n';
		else
			cout << getCnt(nTime1, nTime2, vecTime1, vecTime2) << '\n';
	}

	return 0;
}