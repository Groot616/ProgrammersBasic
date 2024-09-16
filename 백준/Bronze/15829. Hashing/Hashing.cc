#include <iostream>
#include <cmath>

using namespace std;

int getHash(string str, int length)
{
	int hashNum = 0;
	for (int i = 0; i < length; ++i)
	{
		hashNum = hashNum + (int)pow(31, i) * (str[i] - 96);
	}
	return hashNum;
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