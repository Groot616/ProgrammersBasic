#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<vector<char>> keyboard = {
	{'`', '1','2','3','4','5','6','7','8','9','0','-','='},
	{'Q', 'W' , 'E', 'R', 'T', 'Y','U','I','O','P','[',']', '\\'},
	{'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',';','\''},
	{'Z', 'X','C', 'V', 'B', 'N','M', ',','.','/' }
};

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;

	while (getline(cin, str))
	{
		string answer = "";
		
		for (int i = 0; i < str.length(); ++i)
		{
			for (int j = 0; j < keyboard.size(); ++j)
			{
				bool bFind = false;
				for (int k = 1; k < keyboard[j].size(); ++k)
				{
					if (str[i] == ' ')
					{
						answer += ' ';
						bFind = true;
						break;
					}
					else if (str[i] == keyboard[j][k] && str[i] != ' ')
					{
						answer += keyboard[j][k - 1];
						bFind = true;
						break;
					}
				}
				if (bFind)
					break;
			}
		}
		cout << answer << '\n';
	}

	return 0;
}