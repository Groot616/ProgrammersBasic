#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long white, black;

	cin >> white >> black;
	if (black == 0)
		cout << '0' << '\n';
	else if (white == 0)
		cout << '1' << '\n';
	else
		cout << min(black, white + 1) << '\n';

	return 0;
}