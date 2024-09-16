#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	int n, m;
	unordered_map<char, int> strCnt;

	cin >> n >> m;
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		string strM = "";
		cin >> strM;
		for (int j = 0; j < m; ++j)
		{
			strCnt[strM[j]]++;
		}
		for (auto it = strCnt.begin(); it != strCnt.end(); ++it)
		{
			if (it->first == 'O' && it->second > m / 2)
				++cnt;
		}
		strCnt.clear();
	}
	cout << cnt << "\n";

	return 0;
}