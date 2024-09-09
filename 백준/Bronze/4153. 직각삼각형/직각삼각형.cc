#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	vector<int> element;

	do
	{
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		element.push_back(a);
		element.push_back(b);
		element.push_back(c);
		sort(element.begin(), element.end());

		if (pow(element[2], 2) == pow(element[0], 2) + pow(element[1], 2))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
		element.clear();
	} while (a != 0 && b != 0 && c != 0);

	return 0;
}