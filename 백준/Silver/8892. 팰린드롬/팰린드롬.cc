#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string sumStr(string str1, string str2)
{
	return str1 + str2;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		string answer = "";
		int n;
		bool bFind = false;
		vector<string> str;

		cin >> n;
		str.resize(n);
		for (auto& x : str) cin >> x;

		for (int j = 0; j < str.size() - 1; ++j)
		{
			for (int k = j + 1; k < str.size(); ++k)
			{
				string newStr1 = sumStr(str[j], str[k]);
				string newStr2 = sumStr(str[k], str[j]);
				string revStr1 = newStr1;
				string revStr2 = newStr2;
				reverse(revStr1.begin(), revStr1.end());
				reverse(revStr2.begin(), revStr2.end());
				if (newStr1 == revStr1 || newStr2 == revStr2)
				{
					bFind = true;
					if (newStr1 == revStr1) answer = revStr1;
					else answer = revStr2;
					break;
				}
				if (bFind)
					break;
			}
		}
		if (bFind)
			cout << answer << '\n';
		if (!bFind)
			cout << "0" << '\n';
	}

	return 0;
}