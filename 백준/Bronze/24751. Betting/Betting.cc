#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	double ratio;

	cin >> ratio;

	cout << 100 / ratio << '\n';
	cout << 100 / (100 - ratio) << '\n';

	return 0;
}