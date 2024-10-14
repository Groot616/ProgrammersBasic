#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int changeInt(char ch)
{
	return ch - '0';
}

int changeChar(int n)
{
	return n + '0';
}

string sumStr(string x, string y)
{
	long long max_len = max(x.length(), y.length());
	x.insert(0, max_len - x.length(), '0');
	y.insert(0, max_len - y.length(), '0');
	
	int up = 0;
	string sumResult;
	for (int i = max_len - 1; i >= 0; --i)
	{
		int sum = changeInt(x[i]) + changeInt(y[i]) + up;
		up = sum / 10;
		sumResult += changeChar(sum % 10);
	}
	if (up != 0) sumResult += changeChar(up);
	reverse(sumResult.begin(), sumResult.end());
	
	return sumResult;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string x, y;

	cin >> x;
	cin >> y;

	cout << sumStr(x, y) << '\n';

	return 0;
}