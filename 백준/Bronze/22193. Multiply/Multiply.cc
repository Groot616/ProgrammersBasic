#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void fillVecReverse(string str, vector<char>& vecStr)
{
	for (int i = 0; i < str.length(); ++i)
		vecStr.push_back(str[i]);
	reverse(vecStr.begin(), vecStr.end());
}

int changeCharToInt(char ch)
{
	return ch - '0';
}

char changeIntToChar(int n)
{
	return n + '0';
}

void reverseAndAddZero(vector<vector<char>>& mulResult)
{
	for (int i = 0; i < mulResult.size(); ++i)
	{
		reverse(mulResult[i].begin(), mulResult[i].end());
		for (int j = 0; j < i; ++j)
			mulResult[i].push_back('0');
	}
}

void getSum(vector<vector<char>>& mulResult, vector<char> &answer)
{
	// 숫자의 앞에 0을 추가
	int max_len = 0;
	for (const auto& row : mulResult)
		max_len = max(max_len, (int)row.size());

	for (int i = 0; i < mulResult.size(); ++i)
	{
		if (mulResult[i].size() < max_len)
		{
			int addSize = max_len - (int)mulResult[i].size();
			for (int j = 0; j < addSize; ++j)
				mulResult[i].insert(mulResult[i].begin(), '0');
		}
	}

	int up = 0;
	for (int i = max_len - 1; i >= 0; --i)
	{
		int sum = 0;
		sum += up;
		for (int j = 0; j < mulResult.size(); ++j)
		{
			sum += changeCharToInt(mulResult[j][i]);
			up = sum / 10;
		}
		answer.push_back(changeIntToChar(sum % 10));
	}
	if (up != 0)
		answer.push_back(changeIntToChar(up));
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<char> answer;
	int n, m;
	string strN, strM;
	vector<char> vecStrN;
	vector<char> vecStrM;
	vector<vector<char>> mulResult;
	int checkZero = 0;

	cin >> n >> m;
	cin >> strN;
	cin >> strM;
	
	fillVecReverse(strN, vecStrN);
	fillVecReverse(strM, vecStrM);
	//mulResult.resize(max(n ,m));
	mulResult.resize(m);

	for (int i = 0; i < m; ++i)
	{	
		int up = 0;
		//vector<char> tmpSumNum;
		for (int j = 0; j < n; ++j)
		{
			int product = (changeCharToInt(vecStrN[j]) * changeCharToInt(vecStrM[i])) + up;
			int one = product % 10;
			up = product / 10;
			mulResult[i].push_back(changeIntToChar(one));
		}
		if (up != 0) mulResult[i].push_back(changeIntToChar(up));
	}
	
	reverseAndAddZero(mulResult);
	getSum(mulResult, answer);
	reverse(answer.begin(), answer.end());

	auto it = answer.begin();
	while (it != answer.end() && *it == '0')
		it = answer.erase(it);
	if (answer.empty())
		cout << "0" << '\n';
	else
	{
		for (const auto& e : answer)
			cout << e;
		cout << '\n';
	}

	return 0;
}