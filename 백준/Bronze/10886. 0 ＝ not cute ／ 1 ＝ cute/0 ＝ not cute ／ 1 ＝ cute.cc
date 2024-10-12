#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	map<char, int> info = { {'0', 0}, {'1', 0} };

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		char ch;
		cin >> ch;
		if (ch == '0')
			info['0']++;
		else
			info['1']++;
	}
	auto it0 = info.begin();
	auto it1 = prev(info.end());
	if (it0->second > it1->second)
		cout << "Junhee is not cute!" << '\n';
	else
		cout << "Junhee is cute!" << '\n';

	return 0;
}