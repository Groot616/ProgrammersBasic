#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int year;
	vector<int> person;

	while (true)
	{
		cin >> year;
		if (year == 0)
			break;

		for (int i = 0; i < year; ++i)
		{
			int tmp;
			cin >> tmp;
			person.push_back(tmp);
		}

		int max = 0;
		for (int i = 2; i < person.size(); ++i)
		{
			if (person[i - 2] + person[i - 1] + person[i] > max)
				max = person[i - 2] + person[i - 1] + person[i];
		}
		cout << max << '\n';
		person.clear();
	}

	return 0;
}