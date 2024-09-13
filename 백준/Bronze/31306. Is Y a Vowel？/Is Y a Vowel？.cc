#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string str;
	vector<char> vowel = { 'a', 'e', 'i', 'o', 'u'};
	vector<char> vowelY = { 'a', 'e', 'i', 'o', 'u', 'y'};

	cin >> str;
	int cnt = 0;
	int cntY = 0;
	for (int i = 0; i < str.length(); ++i)
	{
		for (int j = 0; j < vowel.size(); ++j)
		{
			if (str[i] == vowel[j])
				++cnt;
		}
		for (int j = 0; j < vowelY.size(); ++j)
		{
			if (str[i] == vowelY[j])
				++cntY;
		}
	}
	cout << cnt << " " << cntY << "\n";

	return 0;
}