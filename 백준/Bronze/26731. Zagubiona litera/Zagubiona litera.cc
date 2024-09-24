#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	vector<bool> alpha(26, false);
	
	cin >> str;
	for (int i = 0; i < str.length(); ++i)
		alpha[str[i] - 65] = 1;

	for (int i = 0; i < alpha.size(); ++i)
	{
		if (alpha[i] == false)
			cout << (char)(i + 65) << '\n';
	}

	return 0;
}