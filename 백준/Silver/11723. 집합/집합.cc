#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void applyOrder(string order, int num, vector<bool> &myArr)
{
	if (order == "add") myArr[num - 1] = true;
	else if (order == "remove") myArr[num - 1] = false;
	else if (order == "check")
	{
		if (myArr[num - 1] == true) cout << "1" << '\n';
		else cout << "0" << '\n';
	}
	else if (order == "toggle")
	{
		if (myArr[num - 1] == true) myArr[num - 1] = false;
		else myArr[num - 1] = true;
	}
	else if (order == "all")
		for (int i = 0; i < myArr.size(); ++i)
			myArr[i] = true;
	else if(order == "empty")
		for (int i = 0; i < myArr.size(); ++i)
			myArr[i] = false;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<bool> arr(20, false);

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		string str;
		getline(cin, str);

		vector<pair<string, int>> devOrder;
		stringstream ss(str);
		string word = "";
		int num;
		ss >> word >> num;
		applyOrder(word, num, arr);
	}

	return 0;
}