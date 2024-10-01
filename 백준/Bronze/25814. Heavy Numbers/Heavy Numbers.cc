#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str1;
	string str2;
	int a, b;
	int sum = 0;

	cin >> str1 >> str2;
	for (int i = 0; i < str1.length(); ++i)
		sum += str1[i] - '0';
	a = str1.length() * sum;
	
	sum = 0;
	for (int i = 0; i < str2.length(); ++i)
		sum += str2[i] - '0';
	b = str2.length() * sum;
	
	if (a > b) cout << "1" << '\n';
	else if (a < b) cout << "2" << '\n';
	else cout << "0" << '\n';

	return 0;
}