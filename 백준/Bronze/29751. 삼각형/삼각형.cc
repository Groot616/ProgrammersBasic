#include <iostream>

using namespace std;

int main()
{
	float W;
	float H;

	cin >> W >> H;
	cout << fixed;
	cout.precision(1);
	cout << 0.5 * W * H << "\n";

	return 0;
}