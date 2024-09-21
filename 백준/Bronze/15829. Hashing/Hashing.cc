#include <iostream>
#include <cmath>

using namespace std;

int getHash(string str, int length)
{
	unsigned long long hashNum = 0;
	unsigned long long r = 1;
	unsigned long long m = 1234567891;
	for (int i = 0; i < length; ++i)
	{
		hashNum += (((unsigned long long)str[i] - 96) * r) % m;
		r = (r * 31) % m;
	}
	return hashNum % m;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string str;
	cin >> n;
	cin >> str;
	cout << getHash(str, n) << '\n';

	return 0;
}