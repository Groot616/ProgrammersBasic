#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int idx = 1;
	while (true)
	{
		int person, money;
		int sum = 0;

		cin >> person >> money;
		if (person == 0 && money == 0)
			break;

		if (idx == 51)
			break;

		for (int i = 0; i < person; ++i)
		{
			int p;
			cin >> p;
			if (p >= money / person)
				sum += money / person;
			else
				sum += p;
		}
		cout << sum << '\n';
		idx++;
	}


	return 0;
}