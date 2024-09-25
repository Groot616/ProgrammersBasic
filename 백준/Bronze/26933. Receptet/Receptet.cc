#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int n;
	int h, b, k;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> h >> b >> k;
		b - h <= 0 ? answer += 0 : answer += k * (b - h);
	}
	cout << answer << '\n';

	return 0;
}