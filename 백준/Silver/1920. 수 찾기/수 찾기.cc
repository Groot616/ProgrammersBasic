#include <iostream>
#include <unordered_set>


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	unordered_set<int> num;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		num.insert(tmp);
	}

	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int tmp;
		cin >> tmp;
		if (num.find(tmp) != num.end())
			cout << "1" << '\n';
		else
			cout << "0" << '\n';
	}

	return 0;
}