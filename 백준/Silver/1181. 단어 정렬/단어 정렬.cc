#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	else return a.length() < b.length();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	set<string> setStr;
	vector<string> vecStr;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string tmp;
		cin >> tmp;
		setStr.insert(tmp);
	}
	for (auto it = setStr.begin(); it != setStr.end(); ++it)
		vecStr.push_back(*it);
	sort(vecStr.begin(), vecStr.end(), compare);

	for (const auto& e : vecStr)
		cout << e << '\n';

	return 0;
}