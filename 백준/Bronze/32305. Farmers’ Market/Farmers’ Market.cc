#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int apple, bag;
	int dozen;

	cin >> apple >> bag;
	cin >> dozen;
	if (apple * bag % 12 == 0)
		cout << apple * bag / 12 * dozen << '\n';
	else
		cout << apple * bag / 12 * dozen + dozen;

	return 0;
}