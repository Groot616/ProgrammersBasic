#include <iostream>

using namespace std;

void divMuffin(int& muffin, int& person)
{
	if (muffin % 2 == 0)
	{
		person += muffin / 2;
		muffin /= 2;
	}
	else
	{
		person += muffin / 2 + 1;
		muffin /= 2;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int muffin;
	int a = 0;
	int b = 0;
	int turn = 0;

	cin >> muffin;
	while (muffin != 0)
	{
		if (turn % 2 == 0)
			divMuffin(muffin, b);
		else
			divMuffin(muffin, a);
		turn++;
	}
	cout << a << " " << b << '\n';

	return 0;
}