#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	int n;
	int nextData = 0;

	cin >> x;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int usedData;
		
		cin >> usedData;
		nextData += x - usedData;
	}
	cout << x + nextData << '\n';

	return 0;
}