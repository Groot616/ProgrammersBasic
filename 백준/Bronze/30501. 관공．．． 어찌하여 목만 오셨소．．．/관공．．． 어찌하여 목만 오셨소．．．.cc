#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
	string answer = "";
	int suspect;

	cin >> suspect;
	unordered_set<char> nameAlpha;
	for (int i = 0; i < suspect; ++i)
	{
		string suspectName;
		cin >> suspectName;
		for (int j = 0; j < suspectName.length(); ++j)
		{
			nameAlpha.insert(suspectName[j]);
		}
		for (const auto& alpha : nameAlpha)
		{
			if (alpha == 'S')
				answer = suspectName;
		}
		nameAlpha.clear();
	}
	cout << answer << "\n";

	return 0;
}