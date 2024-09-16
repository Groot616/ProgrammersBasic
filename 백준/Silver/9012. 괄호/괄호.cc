#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	stack<char> ps;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		while (!ps.empty())
			ps.pop();

		string str;
		cin >> str;
		for (int j = 0; j < str.length(); ++j)
		{
			if (str[j] == '(')
				ps.push('(');
			else
			{
				if(!ps.empty() && ps.top() != ')')
					ps.pop();
				else
					ps.push(')');
			}
		}
		if (ps.empty())
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}