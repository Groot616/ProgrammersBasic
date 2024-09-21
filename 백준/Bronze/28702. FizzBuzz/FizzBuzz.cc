#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str1;
	string str2;
	string str3;
	cin >> str1;
	cin >> str2;
	cin >> str3;
	vector<string> arr;
	arr.push_back(str1);
	arr.push_back(str2);
	arr.push_back(str3);

	vector<int> strCheck;
	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] == "Fizz")
			strCheck.push_back(3);
		else if (arr[i] == "Buzz")
			strCheck.push_back(5);
		else if (arr[i] == "FizzBuzz")
			strCheck.push_back(15);
		else
			strCheck.push_back(1);
	}
	for (int i = 0; i < strCheck.size(); ++i)
	{
		if (strCheck[i] == 1)
		{
			if (i == 0)
			{
				int num = stoi(arr[i]) + 3;
				if (num % 3 == 0 && num % 5 != 0)
					cout << "Fizz" << '\n';
				else if (num % 3 != 0 && num % 5 == 0)
					cout << "Buzz" << '\n';
				else if (num % 3 == 0 && num % 5 == 0)
					cout << "FizzBuzz" << '\n';
				else
					cout << num;
				break;
			}
			else if (i == 1)
			{
				int num = stoi(arr[i]) + 2;
				if (num % 3 == 0 && num % 5 != 0)
					cout << "Fizz" << '\n';
				else if (num % 3 != 0 && num % 5 == 0)
					cout << "Buzz" << '\n';
				else if (num % 3 == 0 && num % 5 == 0)
					cout << "FizzBuzz" << '\n';
				else
					cout << num;
				break;
			}
			else if (i == 2)
			{
				int num = stoi(arr[i]) + 1;
				if (num % 3 == 0 && num % 5 != 0)
					cout << "Fizz" << '\n';
				else if (num % 3 != 0 && num % 5 == 0)
					cout << "Buzz" << '\n';
				else if (num % 3 == 0 && num % 5 == 0)
					cout << "FizzBuzz" << '\n';
				else
					cout << num;
				break;
			}
		}
	}

	return 0;
}