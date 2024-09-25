#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int head, leg;
	int cow;
	int chicken;
	
	cin >> head >> leg;
	// 4cow + 2chicken = leg
	// cow + chicken = head;
	// 2cow = leg - 2 * head;
	// [cow = leg / 2 - head]
	// 2chicken = 4 * head - leg;
	// [chicken = 2 * head - leg / 2]

	chicken = 2 * head - leg / 2;
	cow = leg / 2 - head;;
	
	cout << chicken << " " << cow << '\n';

	return 0;
}