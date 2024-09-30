#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string answer = "";
	int n;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		int ab = num / 100;
		int cd = num % 100;
		(ab * ab + cd * cd) % 7 == 1 ? answer = "YES" : answer = "NO";
		cout << answer << '\n';
	}

	return 0;
}