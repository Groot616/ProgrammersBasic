#include <iostream>
#include <map>

using namespace std;

int main()
{
	int answer = 0;

	int friendCnt;
	map<char, int> track;

	cin >> friendCnt;
	for (int i = 0; i < friendCnt; ++i)
	{
		char tmp;
		cin >> tmp;
		track[tmp]++;
	}

	char myTrack;
	cin >> myTrack;
	for (auto it = track.begin(); it != track.end(); ++it)
	{
		if (it->first == myTrack)
		{
			answer = it->second;
			break;
		}
	}
	cout << answer << "\n";

	return 0;
}