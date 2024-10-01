#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, int>& a, pair<string, int>& b)
{
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<pair<string, int>> total;
	while (true)
	{
		string str;
		getline(cin, str);
		stringstream ss(str);
		string city, temperature;
		ss >> city >> temperature;
		total.push_back(make_pair(city, stoi(temperature)));

		if (city == "Waterloo")
			break;
	}
	sort(total.begin(), total.end(), compare);
	cout << total[0].first << '\n';

	return 0;
}