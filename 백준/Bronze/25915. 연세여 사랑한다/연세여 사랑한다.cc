#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int answer = 0;
	char start;
	map<char, int> alphaIdx;
	for (int i = 0; i < 26; ++i)
		alphaIdx[(char)(i + 65)] = i + 1;
	
	cin >> start;
	int startNum;
	auto it = alphaIdx.find(start);
	if (it != alphaIdx.end())
		startNum = it->second;
	
	string input = "ILOVEYONSEI";
	for (int i = 0; i < input.length(); ++i)
	{
		auto it = alphaIdx.find(input[i]);
		if (it != alphaIdx.end())
		{
			answer += abs(it->second - startNum);
			startNum = it->second;
		}
	}
	cout << answer << '\n';

	return 0;
}