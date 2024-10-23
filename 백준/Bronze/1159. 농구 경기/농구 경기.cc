#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string answer = "";
	int n;
	vector<string> name;
	map<char, int> firstName;

	cin >> n;
	name.resize(n);
	for (auto& x : name) cin >> x;

	for (int i = 0; i < name.size(); ++i)
		firstName[name[i][0]]++;

	bool bFind = false;
	for (auto it = firstName.begin(); it != firstName.end(); ++it)
	{
		if (it->second >= 5)
		{
			bFind = true;
			break;
		}	
	}

	if (bFind)
	{
		for (auto it = firstName.begin(); it != firstName.end(); ++it)
		{
			if (it->second >= 5)
				answer += it->first;
		}
		cout << answer << '\n';
	}
	else
		cout << "PREDAJA" << '\n';

	return 0;
}