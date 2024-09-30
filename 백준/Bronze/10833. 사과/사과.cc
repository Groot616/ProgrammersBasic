#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int answer = 0;
	int school;

	cin >> school;
	for (int i = 0; i < school; ++i)
	{
		int student, apple;
		cin >> student >> apple;
		answer += apple % student;
	}
	cout << answer << '\n';

	return 0;
}