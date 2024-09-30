#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int troom, tcond;
	string order;

	cin >> troom >> tcond;
	cin >> order;
	if (order == "heat")
	{
		if (troom < tcond)
			cout << tcond << '\n';
		else
			cout << troom << '\n';
	}
	else if (order == "freeze")
	{
		if (troom < tcond)
			cout << troom << '\n';
		else
			cout << tcond << '\n';
	}
	else if (order == "auto")
		cout << tcond << '\n';
	else
		cout << troom << '\n';

	return 0;
}