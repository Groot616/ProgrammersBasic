#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<pair<int, string>> person;

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		string str;
		getline(cin, str);
		stringstream ss(str);
		string money, name, country;
		ss >> money >> name >> country;
		if(country == "Russia")
			person.push_back(make_pair(stoi(money), name));
	}
	sort(person.rbegin(), person.rend());
	cout << person[0].second << '\n';

	return 0;
}