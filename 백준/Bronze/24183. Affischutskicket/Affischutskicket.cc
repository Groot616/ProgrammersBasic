#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	float answer = 0;
	float c4;
	float a3;
	float a4;
	cin >> c4 >> a3 >> a4;
	answer = 2 * c4 * ((0.229 * 0.324)) + 2 * a3 * ((0.297 * 0.420)) + a4 * ((0.210 * 0.297));
	cout << answer << '\n';

	return 0;
}