#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_set<char> pixel;

	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			char ch;
			cin >> ch;
			pixel.insert(ch);
		}
	}
	if (pixel.find('w') != pixel.end())
		cout << "chunbae" << '\n';
	else if (pixel.find('b') != pixel.end())
		cout << "nabi" << '\n';
	else if (pixel.find('g') != pixel.end())
		cout << "yeongcheol" << '\n';

	return 0;
}