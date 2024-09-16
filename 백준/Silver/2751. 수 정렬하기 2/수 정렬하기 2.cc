#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	set<int> setNum;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		setNum.insert(tmp);
	}
	
	for (const auto& e : setNum)
		cout << e << '\n';

	return 0;
}