#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int answer = 0;
	int a;
	int b;
	int c;
	vector<int> element;

	cin >> a;
	cin >> b;
	cin >> c;
	element.push_back(a);
	element.push_back(b);
	element.push_back(c);
	sort(element.begin(), element.end());
	if (element[0] + element[1] == element[2])
		answer = 1;

	cout << answer << "\n";

	return 0;
}