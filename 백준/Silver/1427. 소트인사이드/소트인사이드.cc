#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	vector<int> element;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
	{
		element.push_back(str[i] - '0');
	}
	sort(element.rbegin(), element.rend());
	for (int i = 0; i < element.size(); ++i)
		cout << element[i];
	cout << endl;
	
	return 0;
}