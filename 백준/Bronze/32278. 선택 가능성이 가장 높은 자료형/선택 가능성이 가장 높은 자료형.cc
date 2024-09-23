#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long n;
	
	cin >> n;
	if (n >= -32768 && n <= 32767)
		cout << "short" << '\n';
	else if (n >= -2147483648 && n <= 2147483647)
		cout << "int" << '\n';
	else if(n >= -9223372036854775808 && n <= 9223372036854775807)
		cout << "long long" << '\n';

	return 0;
}