#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string tmp;
		cin >> tmp;
		int exponential = tmp[tmp.length() - 1] - '0';
		int base = stoi(tmp.substr(0, tmp.length() - 1));
		answer += (int)pow(base, exponential);
	}
	cout << answer << '\n';

	return 0;
}