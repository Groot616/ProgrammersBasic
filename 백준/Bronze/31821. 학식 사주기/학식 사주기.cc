#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int menu;
	vector<int> price;
	int people;
	vector<int> choose;
	int answer = 0;

	cin >> menu;
	for (int i = 0; i < menu; ++i)
	{
		int tmpPrice;
		cin >> tmpPrice;
		price.push_back(tmpPrice);
	}

	cin >> people;
	for (int i = 0; i < people; ++i)
	{
		int tmpChoose;
		cin >> tmpChoose;
		choose.push_back(tmpChoose);
	}

	for (int i = 0; i < choose.size(); ++i)
	{
		int chooseIdx = choose[i];
		answer += price[chooseIdx - 1];
	}
	cout << answer << "\n";

	return 0;
}