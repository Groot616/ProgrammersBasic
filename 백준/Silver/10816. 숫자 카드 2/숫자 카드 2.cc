#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	unordered_map<int, int> cardCnt;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		cardCnt[tmp]++;
	}

	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int tmp;
		cin >> tmp;
		auto it = cardCnt.find(tmp);
		if (it != cardCnt.end())
			cout << it->second;
		if (it == cardCnt.end())
			cout << "0";
		if(i != m - 1)
			cout << " ";
	}

	return 0;
}