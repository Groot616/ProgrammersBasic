#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int m, h;
	int n;

	cin >> m >> h;
	cin >> n;
	for(int i=0; i<n; ++i)
	{
		int cow, bee;

		cin >> cow >> bee;
		cow* m > bee* h ? answer += cow * m : answer += bee * h;
	}
	cout << answer << '\n';

	return 0;
}