#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	int strLength;
	vector<int> arr;
	int idx = 0;

	cin >> str;
	if (str[0] != '1')
		cout << "-1";
	else
	{
		for (int i = 0; i < str.length(); ++i)
			arr.push_back(str[i] - '0');
		for (int i = 0; i < arr.size(); ++i)
		{
			if (arr[i] != i + 1)
			{
				cout << "-1";
				return 0;
			}
			else
				idx = i;
		}
		cout << arr[idx] << '\n';
	}

	return 0;
}