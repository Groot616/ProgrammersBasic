#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;

	cout << fixed;
	cout.precision(2);

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		float answer = 0;

		cin >> m;
		cin.ignore();
		for (int j = 0; j < m; ++j)
		{
			string str;
			getline(cin, str);
			stringstream ss(str);
			string food, needs, price;
			ss >> food >> needs >> price;
			answer += stof(needs) * stof(price);
		}
		cout << '$' << answer << '\n';
	}

	return 0;
}