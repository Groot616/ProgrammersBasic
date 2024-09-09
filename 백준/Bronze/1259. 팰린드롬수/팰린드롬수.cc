#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int num;
	vector<char> up;
	vector<char> down;

	do
	{
		cin >> num;
		if (num == 0) break;
		
		string numStr = to_string(num);

		if (num < 10)
		{
			cout << "yes" << endl;
		}
		else
		{
			for (int i = 0; i < numStr.length(); ++i)
			{
				up.push_back(numStr[i]);
			}
			down = up;
			int cnt = 0;
			reverse(down.begin(), down.end());
			for (int i = 0; i < up.size(); ++i)
			{
				if (up[i] == down[i])
					++cnt;
			}
			if (cnt == up.size())
				cout << "yes" << endl;
			else
				cout << "no" << endl;
			up.clear();
			down.clear();
		}	
	} while (true);

	return 0;
}