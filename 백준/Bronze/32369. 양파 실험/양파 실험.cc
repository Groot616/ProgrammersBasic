#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int day;
	int onion1 = 1;
	int onion2 = 1;
	int A;
	int B;

	cin >> day >> A >> B;
	for (int i = 0; i < day; ++i)
	{
		onion1 += A;
		onion2 += B;

		if (onion1 < onion2)
			swap(onion1, onion2);
		else if (onion1 == onion2)
			onion2 -= 1;
		else
			continue;
	}
	cout << onion1 << " " << onion2 << '\n';

	return 0;
}