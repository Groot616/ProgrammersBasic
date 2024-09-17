#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int day;
	vector<int> plan;
	vector<int> study;

	cin >> day;
	for (int i = 0; i < day; ++i)
	{
		int tmp;
		cin >> tmp;
		plan.push_back(tmp);
	}

	for (int i = 0; i < day; ++i)
	{
		int tmp;
		cin >> tmp;
		study.push_back(tmp);
	}

	for (int i = 0; i < day; ++i)
	{
		if (plan[i] <= study[i])
			++answer;
	}
	cout << answer << '\n';


	return 0;
}