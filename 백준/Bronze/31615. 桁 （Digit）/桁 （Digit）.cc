#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b;
	string sum;

	cin >> a;
	cin >> b;
	sum = to_string(a + b);

	cout << sum.length() << "\n";

	return 0;
}