#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	int cnt;
	set<int> element;

	cin >> cnt;
	for (int i = 0; i < cnt; ++i)
	{
		int tmp;
		cin >> tmp;
		element.insert(tmp);
	}

	for (auto it = element.begin(); it != element.end(); ++it)
		cout << *it << "\n";

	return 0;
}