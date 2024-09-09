#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int N;
	string semina;
	map<string, string> seminaClass;
	seminaClass.insert({ "Algorithm", "204" });
	seminaClass.insert({ "DataAnalysis", "207" });
	seminaClass.insert({ "ArtificialIntelligence", "302" });
	seminaClass.insert({ "CyberSecurity", "B101" });
	seminaClass.insert({ "Network", "303" });
	seminaClass.insert({ "Startup", "501" });
	seminaClass.insert({ "TestStrategy", "105" });

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> semina;
		for (auto it = seminaClass.begin(); it != seminaClass.end(); ++it)
		{
			if(it->first == semina)
				cout << it->second << "\n";
		}
	}

	return 0;
}