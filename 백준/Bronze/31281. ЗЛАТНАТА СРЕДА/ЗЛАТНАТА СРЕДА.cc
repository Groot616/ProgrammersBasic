#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	unsigned long long a;
	unsigned long long b;
	unsigned long long c;
	vector<unsigned long long> element;

	cin >> a >> b >> c;
	element.push_back(a);
	element.push_back(b);
	element.push_back(c);
	sort(element.begin(), element.end());
	cout << element[1] << "\n";

	return 0;
}