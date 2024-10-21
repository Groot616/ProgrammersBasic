#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int olli;
	string stan;

	while (true)
	{
		vector<bool> num(10, true);
		bool bFinish = false;
		while (true)
		{
			cin >> olli;
			if (olli == 0)
			{
				bFinish = true;
				break;
			}

			cin.ignore();
			getline(cin, stan);
			if (stan == "right on")
				break;
			else if (stan == "too high")
			{
				for (int i = olli - 1; i <= num.size() - 1; ++i)
					num[i] = false;
			}
			else if (stan == "too low")
			{
				for (int i = olli - 1; i >= 0; --i)
					num[i] = false;
			}
		}
		if (bFinish) break;

		if (num[olli - 1] == false)
			cout << "Stan is dishonest" << '\n';
		else
			cout << "Stan may be honest" << '\n';
	}

	return 0;
}