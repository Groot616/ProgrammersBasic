#include <iostream>
#include <string>
#include<unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// Pepper Name	Scolville Heat Units
	// Poblano	1500
	//	Mirasol	6000
	//	Serrano	15500
	//	Cayenne	40000
	//	Thai	75000
	//	Habanero	125000
	int answer = 0;
	int n;
	unordered_map<string, int> pepperScoville;
	pepperScoville.insert({ "Poblano", 1500 });
	pepperScoville.insert({ "Mirasol", 6000 });
	pepperScoville.insert({ "Serrano", 15500 });
	pepperScoville.insert({ "Cayenne", 40000 });
	pepperScoville.insert({ "Thai", 75000 });
	pepperScoville.insert({ "Habanero", 125000 });

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		auto it = pepperScoville.find(str);
		answer += it->second;
	}
	cout << answer << '\n';

	return 0;
}