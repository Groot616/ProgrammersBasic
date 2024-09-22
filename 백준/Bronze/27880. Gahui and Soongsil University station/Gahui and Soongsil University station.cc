#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 에스컬레이터계단 21cm, 일반계단 17cm
	int answer = 0;
	for (int i = 0; i < 4; ++i)
	{
		string str;
		getline(cin, str);
		stringstream ss(str);
		string kind, cnt;
		ss >> kind >> cnt;
		if (kind == "Es")
			answer += 21 * stoi(cnt);
		if (kind == "Stair")
			answer += 17 * stoi(cnt);
	}
	cout << answer << '\n';

	return 0;
}