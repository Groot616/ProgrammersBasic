#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string answer = "";
	string record;
	int a = 0;
	int b = 0;

	cin >> record;
	for (int i = 0; i < record.length(); i += 2)
	{
		if (record[i] == 'A')
			a += record[i + 1];
		else
			b += record[i + 1];
	}
	if (a > b)
		answer += 'A';
	else
		answer += 'B';
	cout << answer << '\n';


	return 0;
}