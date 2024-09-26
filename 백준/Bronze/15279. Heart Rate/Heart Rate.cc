#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		float b, p;
		float bpm;

		cin >> b >> p;
		bpm = 15 / p * b * 4;
		cout << fixed;
		cout.precision(4);
		cout << bpm - 60 / p << " " << bpm << " " << bpm + 60 / p << '\n';
	}

	return 0;
}