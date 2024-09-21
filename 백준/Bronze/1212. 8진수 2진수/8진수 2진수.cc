#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string answer = "";
	string n;

	// 2^6 * 3 2^3 * 1 2^0 * 4  /011/001/100
	// 192 + 8 + 4

	cin >> n;
	if (n[0] == '0' && n.length() == 1)
	{
		answer = "0";
		cout << answer << '\n';
		return 0;
	}
	for (int i = 0; i < n.length(); i++)
	{
		int num = n[i] - '0';
		switch (num)
		{
		case 0:
			answer += "000";
			break;
		case 1:
			answer += "001";
			break;
		case 2:
			answer += "010";
			break;
		case 3:
			answer += "011";
			break;
		case 4:
			answer += "100";
			break;
		case 5:
			answer += "101";
			break;
		case 6:
			answer += "110";
			break;
		case 7:
			answer += "111";
			break;
		default:
			break;
		}
	}

	if (answer[0] == '0' && answer[1] != '0')
		answer.erase(answer.begin());
	else if (answer[0] == '0' && answer[1] == '0')
	{
		answer.erase(answer.begin());
		answer.erase(answer.begin());
	}
	cout << answer << '\n';

	return 0;
}