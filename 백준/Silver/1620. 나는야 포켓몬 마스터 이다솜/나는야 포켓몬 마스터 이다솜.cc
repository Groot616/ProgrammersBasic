#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void makeCatalog(unordered_map<string, string> &pocketmonNameNum, unordered_map<string, string> &pocketmonNumName, const int totalCnt)
{
	for (int i = 0; i < totalCnt; ++i)
	{
		string name;

		cin >> name;
		pocketmonNameNum[name] = to_string(i + 1);
		pocketmonNumName[to_string(i + 1)] = name;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	unordered_map<string, string> pocketmonNameNum;
	unordered_map<string, string> pocketmonNumName;
	
	cin >> n >> m;
	makeCatalog(pocketmonNameNum, pocketmonNumName, n);

	for (int i = 0; i < m; ++i)
	{
		string collection;

		cin >> collection;
		if (collection[0] >= '0' && collection[0] <= '9')
			cout << pocketmonNumName[collection] << '\n';
		else
			cout << pocketmonNameNum[collection] << '\n';
	}

	return 0;
}