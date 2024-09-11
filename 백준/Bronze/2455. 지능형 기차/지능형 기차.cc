#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int input, output;
	int people = 0;
	vector<int> answer;

	for (int i = 0; i < 4; ++i)
	{
		cin >> output >> input;
		people += input - output;
		answer.push_back(people);
	}

	cout << *max_element(answer.begin(), answer.end()) << "\n";
	
	return 0;
}