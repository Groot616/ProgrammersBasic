#include <iostream>
#include <unordered_set>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<string> vecPlayer;

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		bool zack = false;
		bool mack = false;

		string numbers;
		getline(cin, numbers);
		stringstream ss(numbers);
		string word = "";
		while (getline(ss, word, ' '))
			vecPlayer.push_back(word);

		for (int i = 0; i < vecPlayer.size(); ++i)
		{
			if (vecPlayer[i] == "17")
				zack = true;
			if (vecPlayer[i] == "18")
				mack = true;
		}

		if (zack && mack)
		{
			cout << vecPlayer[0];
			for (int i = 1; i < vecPlayer.size(); ++i)
				cout << " " << vecPlayer[i];
			cout << '\n';
			cout << "both" << '\n' << '\n';
		}
		else if (zack && !mack)
		{
			cout << vecPlayer[0];
			for (int i = 1; i < vecPlayer.size(); ++i)
				cout << " " << vecPlayer[i];
			cout << '\n';
			cout << "zack" << '\n' << '\n';
		}
		else if (!zack && mack)
		{
			cout << vecPlayer[0];
			for (int i = 1; i < vecPlayer.size(); ++i)
				cout << " " << vecPlayer[i];
			cout << '\n';
			cout << "mack" << '\n' << '\n';
		}
		else
		{
			cout << vecPlayer[0];
			for (int i = 1; i < vecPlayer.size(); ++i)
				cout << " " << vecPlayer[i];
			cout << '\n';
			cout << "none" << '\n' << '\n';
		}
		vecPlayer.clear();
	}
	
	return 0;
}