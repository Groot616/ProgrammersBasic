#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<pair<int, int>> ingredientInfo;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int needIngredient;
		int totalIngredient;
		
		cin >> needIngredient;
		cin >> totalIngredient;
		ingredientInfo.push_back(make_pair(needIngredient, totalIngredient));
	}

	int cnt = 0;
	bool checkBreak = false;
	while (true)
	{
		for (int i = 0; i < ingredientInfo.size(); ++i)
		{
			ingredientInfo[i].second -= ingredientInfo[i].first;
			if (ingredientInfo[i].second < 0)
			{
				checkBreak = true;
				break;
			}
		}
		if (checkBreak == true)
			break;
		else
			++cnt;
	}
	cout << cnt << '\n';

	return 0;
}