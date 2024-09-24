#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string mbti;
	int n;
	unordered_map<string, int> friendMbtiCnt;
	
	cin >> mbti;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		friendMbtiCnt[str]++;
	}
	
	int cnt = 0;
	auto it = friendMbtiCnt.find(mbti);
	if (it != friendMbtiCnt.end())
		cnt = it->second;
	cout << cnt << '\n';
	

	return 0;
}