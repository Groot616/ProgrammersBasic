#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int>>& a, pair<string, pair<int, int>>& b)
{
	if (a.second.first == b.second.first)
		return a.second.second < b.second.second;
	else
		return a.second.first < b.second.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<pair<string, pair<int, int>>> account;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int old;
		string name;
		cin >> old >> name;
		account.push_back(make_pair(name, make_pair(old, i)));
	}
	
	sort(account.begin(), account.end(), compare);
	for (const auto& e : account)
		cout << e.second.first << " " << e.first << '\n';

	return 0;
}