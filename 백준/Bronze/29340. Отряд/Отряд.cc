#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string squad1;
	string squad2;

	cin >> squad1;
	cin >> squad2;
	for (int i = 0; i < squad1.length(); ++i)
	{
		if (squad1[i] > squad2[i])
			cout << squad1[i];
		else
			cout << squad2[i];
	}
	cout << '\n';


	return 0;
}