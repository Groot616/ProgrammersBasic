#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string num;

	cin >> num;
	int sum = 0;
	int cnt = 0;
	bool isAnswer = false;
	while (true)
	{
		if (num.length() == 1)
		{
			if (stoi(num) % 3 == 0)
			{
				isAnswer = true;
				break;
			}
			else
			{
				isAnswer = false;
				break;
			}
		}
		else
		{
			for (int i = 0; i < num.length(); ++i)
			{
				sum += num[i] - '0';
			}
			++cnt;
			int length = to_string(sum).length();
			if (length == 1 && sum % 3 == 0)
			{
				isAnswer = true;
				break;
			}
			else if (length == 1 && sum % 3 != 0)
			{
				isAnswer = false;
				break;
			}
			else
			{
				num = to_string(sum);
				sum = 0;
			}
		}
	}

	if (isAnswer)
		cout << cnt << "\n" << "YES" << "\n";
	else
		cout << cnt << "\n" << "NO" << "\n";

	return 0;
}