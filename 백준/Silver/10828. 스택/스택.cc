#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	stack<int> st;

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		string str;
		getline(cin, str);
		
		stringstream ss(str);
		string cmd;
		string num;
		ss >> cmd >> num;
		if (cmd == "push")
		{
			st.push(stoi(num));
		}
		else if (cmd == "top")
		{
			if (!st.empty())
				cout << st.top() << '\n';
			else
				cout << "-1" << '\n';
		}
		else if (cmd == "size")
			cout << st.size() << '\n';
		else if (cmd == "empty")
		{
			if (st.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (cmd == "pop")
		{
			if (!st.empty())
			{
				cout << st.top() << '\n';
				st.pop();
			}
			else
				cout << "-1" << '\n';
		}
			
	}

	return 0;
}