#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int sum = 0;

	int test;
	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int price;
		cin >> price;
		sum += price;
	}
	answer = sum;
	cout << answer << '\n';

	return 0;
}