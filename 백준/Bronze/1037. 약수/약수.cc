#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int answer = 0;
	vector<int> element;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		element.push_back(tmp);
	}
	sort(element.begin(), element.end());
	if (element.size() == 1)
		answer = element[0] * element[0];
	else
		answer = element[0] * element[n - 1];
	cout << answer << "\n";
	
	return 0;
}