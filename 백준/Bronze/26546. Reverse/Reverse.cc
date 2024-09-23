#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		string str;
		getline(cin, str);


		stringstream ss(str);
		string myString, idx1, idx2;
		ss >> myString >> idx1 >> idx2;
		for (int j = 0; j < myString.length(); ++j)
		{
			if (j < stoi(idx1) || j > stoi(idx2) - 1)
				cout << myString[j];
		}
		cout << '\n';
	}

	return 0;
}