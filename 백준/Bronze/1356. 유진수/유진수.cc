#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string answer = "";
	string n;
	vector<int> arr;

	cin >> n;
	if (n.length() == 1)
	{
		answer += "NO";
		cout << answer << '\n';
		return 0;
	}

	bool bIsUzins = false;
	for (int i = 0; i < n.length() - 1; ++i)
	{
		string num1 = "";
		string num2 = "";
		for (int j = 0; j <= i; ++j)
			num1 += n[j];
		for (int j = i + 1; j < n.length(); ++j)
			num2 += n[j];

		int mul1 = 1;
		int mul2 = 1;
		for (int j = 0; j < num1.length(); ++j)
			mul1 *= (num1[j] - '0');
		for (int j = 0; j < num2.length(); ++j)
			mul2 *= (num2[j] - '0');

		if (mul1 == mul2)
		{
			bIsUzins = true;
			break;
		}
	}

	if (bIsUzins)
		answer = "YES";
	else
		answer = "NO";
	cout << answer << '\n';

	return 0;
}