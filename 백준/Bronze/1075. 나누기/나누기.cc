#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string answer = "";
	int n, k;
	int need;

	cin >> n;
	cin >> k;
	need = k - (n % k);
	
	n %= 100;
	n += need;
	while (n / k != 0)
	{
		n -= k;
	}
	answer = to_string(n);
	if (answer.length() == 1)
		answer = "0" + answer;
	cout << answer << "\n";
}