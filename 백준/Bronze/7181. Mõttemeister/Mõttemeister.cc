#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	int n;
	vector<string> myAnswer;

	cin >> str;
	cin >> n;
	myAnswer.resize(n);
	for (auto& x : myAnswer) cin >> x;
	for (int i = 0; i < myAnswer.size(); ++i)
	{
		int cnt1 = 0;
		int cnt2 = 0;
		unordered_set<char> alpha;
		for (int j = 0; j < myAnswer[i].length(); ++j)
			alpha.insert(myAnswer[i][j]);
		
		for (int j = 0; j < myAnswer[i].length(); ++j)
		{
			if (myAnswer[i][j] == str[j])
				++cnt1;
		}

		for (int j = 0; j < myAnswer[i].length(); ++j)
		{
			if (str.find(myAnswer[i][j]) != string::npos)
				++cnt2;
		}
		cout << cnt2 << " " << cnt1 << '\n';
	}

	return 0;
}