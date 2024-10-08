#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void insertName(int size, set<string>& mySet)
{
	for (int i = 0; i < size; ++i)
	{
		string strName;
		cin >> strName;
		mySet.insert(strName);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<string> answer;
	int n, m;
	set<string> listen;
	set<string> see;
	
	cin >> n >> m;
	insertName(n, listen);
	insertName(m, see);

	for (auto it = listen.begin(); it != listen.end(); ++it)
	{
		if (see.find(*it) != see.end())
			answer.push_back(*it);
	}

	sort(answer.begin(), answer.end());
	cout << answer.size() << '\n';
	for (const auto& e : answer)
		cout << e << '\n';

	return 0;
}