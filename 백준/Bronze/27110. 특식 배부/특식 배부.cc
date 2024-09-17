#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int n;
	int chicken1, chicken2, chicken3;
	
	cin >> n;
	cin >> chicken1 >> chicken2 >> chicken3;
	n >= chicken1 ? answer += chicken1 : answer += n;
	n >= chicken2 ? answer += chicken2 : answer += n;
	n >= chicken3 ? answer += chicken3 : answer += n;
	cout << answer << '\n';

	return 0;
}