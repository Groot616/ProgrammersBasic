#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	vector<string> str1;
	vector<string> str2;

	cin >> n;
	cin >> m;
	str1.resize(n);
	str2.resize(m);
	for (auto& x : str1) cin >> x;
	for (auto& x : str2) cin >> x;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cout << str1[i] << " as " << str2[j] << '\n';

	return 0;
}