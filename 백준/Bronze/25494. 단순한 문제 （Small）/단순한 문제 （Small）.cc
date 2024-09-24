#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int t1, t2, t3;
		cin >> t1 >> t2 >> t3;
		cout << min({ t1, t2, t3 }) << '\n';
	}

	return 0;
}