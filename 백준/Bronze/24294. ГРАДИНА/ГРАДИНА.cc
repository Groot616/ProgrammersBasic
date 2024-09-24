#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n1, n2, m1, m2;
	cin >> n1;
	cin >> n2;
	cin >> m1;
	cin >> m2;
	
	int height = n2 + m2;
	int width = max(n1, m1);

	cout << 2 * height + 2 * width + 4;

	return 0;
}