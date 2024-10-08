#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int idx = 0;
	long long sz = 99999999999999999;

	cin >> n;
	for (int i = 666 ; i < sz; ++i)
	{
		long long answer = 0;
		string tmp = to_string(i);
		if(tmp.find("666") != string::npos)
		{
			answer = i;
			++idx;
		}

		if (n == idx)
		{
			cout << answer << '\n';
			break;
		}
	}

	return 0;
}