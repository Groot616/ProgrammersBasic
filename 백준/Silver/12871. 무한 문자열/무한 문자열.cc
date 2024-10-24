#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	string s, newS;
	string t, newT;
	int sLength, tLength;

	cin >> s;
	cin >> t;
	newS = s;
	newT = t;
	sLength = s.length();
	tLength = t.length();
	int totalLength = lcm(sLength, tLength);
	for (int i = 0; i < totalLength / sLength - 1; ++i)
		newS += s;
	for (int i = 0; i < totalLength / tLength - 1; ++i)
		newT += t;

	if (newS == newT)
		answer = 1;
	else
		answer = 0;
	
	cout << answer << '\n';

	return 0;
}