#include <iostream>
#include <vector>

using namespace std;

vector<char> autad = { 'N', 'E', 'S', 'W' };

int findIdx(char forward)
{
	for (int i = 0; i < autad.size(); ++i)
		if (autad[i] == forward)
			return i;
}

void changeForward(int order, char& forward)
{
	if (order == 1)
	{
		int idx = findIdx(forward);
		if (idx + 1 > 3)
			forward = autad[0];
		else
			forward = autad[idx + 1];
	}
	else if (order == 2)
	{
		int idx = findIdx(forward);
		if (idx + 2 > 3)
			forward = autad[idx - 2];
		else
			forward = autad[idx + 2];
	}
	else if (order == 3)
	{
		int idx = findIdx(forward);
		if (idx - 1 < 0)
			forward = autad[3];
		else
			forward = autad[idx - 1];
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	char answer = 'N';
	for (int i = 0; i < 10; ++i)
	{
		int order;
		cin >> order;
		changeForward(order, answer);
	}
	cout << answer << '\n';

	return 0;
}