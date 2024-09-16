#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	queue<int> q;

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
			q.push(stoi(num));
		else if (cmd == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << '\n';
				q.pop();
			}
			else
				cout << "-1" << '\n';
		}
		else if (cmd == "size")
			cout << q.size() << '\n';
		else if (cmd == "empty")
		{
			if (q.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (cmd == "front")
		{
			if (!q.empty())
				cout << q.front() << '\n';
			else
				cout << "-1" << '\n';
		}
		else if (cmd == "back")
		{
			if (!q.empty())
				cout << q.back() << '\n';
			else
				cout << "-1" << '\n';
		}
	}

	return 0;
}