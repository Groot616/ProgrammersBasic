#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;

	while (getline(cin, str))
	{
		stringstream ss(str);
		string first;
		string second;
		ss >> first >> second;
		
		if (second.find(first) != string::npos)
			cout << "Yes" << '\n';
		else
		{
			int idx = 0;
			int cnt = 0;
			for (int i = 0; i < first.length(); ++i)
			{
				while(true)
				{
					if (first[i] == second[idx])
					{
						++cnt;
						break;
					}
					else
					{
						second.erase(second.begin() + idx);
						if (idx == second.length())
							break;
					}
				}
				++idx;

				if (idx >= second.length())
					break;
			}
			if (first == second || cnt == first.length())
				cout << "Yes" << '\n';
			else
				cout << "No" << '\n';
		}
	}

	return 0;
}