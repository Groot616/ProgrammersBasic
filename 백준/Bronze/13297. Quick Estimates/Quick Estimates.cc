#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string num;
		cin >> num;
		cout << num.length() << '\n';
	}

	return 0;
}