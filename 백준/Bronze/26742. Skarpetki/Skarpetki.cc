#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// b는 흰색 양말, c는 검은색 양말
	// 가능한 단일 색상의 양말 쌍의 수 출력
	int answer = 0;
	string str;
	unordered_map<char, int> socksCnt;

	cin >> str;
	for (int i = 0; i < str.length(); ++i)
		socksCnt[str[i]]++;
	
	for (auto it = socksCnt.begin(); it != socksCnt.end(); ++it)
		answer += it->second / 2;
	cout << answer << '\n';

	return 0;
}