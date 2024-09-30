#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	unordered_map<string, int> vote;

	for (int i = 0; i < 9; ++i)
	{
		string str;
		cin >> str;
		vote[str]++;
	}
	auto it1 = vote.find("Lion");
	auto it2 = vote.find("Tiger");
	if (it1->second > it2->second)
		cout << it1->first << '\n';
	else
		cout << it2->first << '\n';

	return 0;
}