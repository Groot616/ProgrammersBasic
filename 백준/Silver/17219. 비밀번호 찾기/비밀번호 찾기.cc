#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

void makeSite(unordered_map<string, string>& site, const int n)
{
	for (int i = 0; i < n; ++i)
	{
		string info;
		
		getline(cin, info);
		stringstream ss(info);
		string siteName, pw;
		ss >> siteName >> pw;
		site[siteName] = pw;
	}
}

void findPassword(const unordered_map<string, string> site, const int m)
{
	for (int i = 0; i < m; ++i)
	{
		string siteName;

		cin >> siteName;
		auto it = site.find(siteName);
		if(it != site.end())
			cout << it->second << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	unordered_map<string, string> site;

	cin >> n >> m;
	cin.ignore();

	makeSite(site, n);
	findPassword(site, m);

	return 0;
}