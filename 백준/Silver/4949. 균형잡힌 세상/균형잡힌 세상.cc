#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str = "";
	stack<char> check;
	vector<string> strs;

	while (true)
	{
		getline(cin, str);
		if (str == ".")
			break;
		strs.push_back(str);
	}

	for (int i = 0; i < strs.size(); ++i)
	{
		for (int j = 0; j < strs[i].size() - 1; ++j)
		{
			if (strs[i][j] == '(')
				check.push('(');
			else if (strs[i][j] == '[')
				check.push('[');
			else if (strs[i][j] == ')')
			{
				if (!check.empty() && check.top() == '(')
					check.pop();
				else
					check.push(')');
			}
			else if (strs[i][j] == ']')
			{
				if (!check.empty() && check.top() == '[')
					check.pop();
				else
					check.push(']');
			}
		}
		if (check.empty())
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
		while (!check.empty())
			check.pop();
	}

	return 0;
}