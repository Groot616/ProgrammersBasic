#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

void getResult(string str, vector<int> &answer)
{
	if (str == "HHH") answer[7] += 1;
	else if (str == "HHT") answer[6] += 1;
	else if (str == "HTH") answer[5] += 1;
	else if (str == "HTT") answer[4] += 1;
	else if (str == "THH") answer[3] += 1;
	else if (str == "THT") answer[2] += 1;
	else if (str == "TTH") answer[1] += 1;
	else if (str == "TTT") answer[0] += 1;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<string> str;

	cin >> n;
	str.resize(n);
	for (auto& x : str) cin >> x;

	for (int i = 0; i < str.size(); ++i)
	{
		vector<int> answer(8);
		for (int j = 0; j < 38; ++j)
			getResult(str[i].substr(j, 3), answer);
		for (const auto& e : answer)
			cout << e << " ";
		cout << '\n';
		answer.clear();
	}

	return 0;
}