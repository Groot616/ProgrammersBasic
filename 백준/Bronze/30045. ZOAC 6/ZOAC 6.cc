#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int answer = 0;
	int test;
	
	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		string str;
		cin >> str;
		int pos = 0;
		bool found = false;
		while ((pos = str.find("01", pos) != string::npos))
		{
			++answer;
			pos += 2;
			found = true;
			break;
		}
		if (!found)
		{
			found = false;
			pos = 0;
			while ((pos = str.find("OI", pos) != string::npos))
			{
				++answer;
				pos += 2;
				found = true;
				break;
			}
		}
	}
	cout << answer << '\n';

	return 0;
}