#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	float answer = 0;
	int n;
	float quality, year;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> quality >> year;
		answer += quality * year;
	}
	cout << answer << '\n';


	return 0;
}