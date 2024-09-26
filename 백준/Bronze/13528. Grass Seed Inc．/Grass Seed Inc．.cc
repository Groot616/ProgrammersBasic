#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	float answer = 0;
	float cost, cnt;

	cin >> cost;
	cin >> cnt;
	for (int i = 0; i < cnt; ++i)
	{
		float width, height;
		
		cin >> width >> height;
		answer += width * height * cost;
	}
	cout << fixed;
	cout.precision(8);
	cout << answer << '\n';

	return 0;
}