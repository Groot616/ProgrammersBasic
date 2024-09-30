#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int angle1, angle2, angle3;
		cin >> angle1 >> angle2 >> angle3;

		if (angle1 + angle2 + angle3 == 180)
			cout << angle1 << " " << angle2 << " " << angle3 << " Seems OK" << '\n';
		else
			cout << angle1 << " " << angle2 << " " << angle3 << " Check" << '\n';
	}

	return 0;
}