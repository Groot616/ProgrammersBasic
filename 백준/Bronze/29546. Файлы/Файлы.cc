#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int test;
	vector<string> jpg;

	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		string str;
		cin >> str;
		jpg.push_back(str);
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int n1, n2;
		cin >> n1 >> n2;
		for (int j = n1; j <= n2; ++j)
			cout << jpg[j - 1] << '\n';
	}

	return 0;
}