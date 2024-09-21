#include <iostream>
#include <string>

using namespace std;

int main()
{
	int answer = 0;
	int n;

	cin >> n;
	answer += n / 5;
	answer += n / 25;
	answer += n / 125;

	cout << answer << '\n';

	return 0;
}