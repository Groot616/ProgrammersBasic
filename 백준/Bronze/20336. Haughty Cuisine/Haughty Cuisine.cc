#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		string str;
		vector<string> setMenu;
		getline(cin, str);
		stringstream ss(str);
		string word = "";
		while (getline(ss, word, ' '))
			setMenu.push_back(word);
		if (i == n - 1)
		{
			cout << setMenu[0];
			for (int j = 1; j < setMenu.size(); ++j)
			{
				cout << " " << setMenu[j];
			}
			cout << '\n';
		}
		else
			setMenu.clear();
	}

	return 0;
}