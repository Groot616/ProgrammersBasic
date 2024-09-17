#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int adventureCnt;
	int length;

	cin >> adventureCnt >> length;
	for (int i = 0; i < adventureCnt; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp <= length)
			++answer;
	}
	cout << answer << '\n';

	return 0;
}