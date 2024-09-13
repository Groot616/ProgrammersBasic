#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> str;

	for (int i = 0; i < 3; ++i)
	{
		string tmp;
		cin >> tmp;
		str.push_back(tmp);
	}

	int cnt = 0;
	bool isK = false;
	bool isL = false;
	bool isP = false;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i][0] == 'k')
		{
			++cnt;
			isK = true;
		}
		else if (str[i][0] == 'l')
		{
			++cnt;
			isL = true;
		}
		else if (str[i][0] == 'p')
		{
			++cnt;
			isP = true;
		}
	}
	if (cnt == 3 && isK == true && isL == true && isP == true)
		cout << "GLOBAL" << "\n";
	else
		cout << "PONIX" << "\n";

	return 0;
}