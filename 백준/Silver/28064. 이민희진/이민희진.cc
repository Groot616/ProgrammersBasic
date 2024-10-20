#include <iostream>
#include <vector>

using namespace std;

int checkSamePart(const vector<string> name)
{
	int retCnt = 0;

	for (int i = 0; i < name.size() - 1; ++i)
	{
		bool bFind = false;
		
		for (int j = i + 1; j < name.size(); ++j)
		{
			for (int k = 1; k <= name[i].length(); ++k)
			{
				if (k > name[j].length())
					break;
				// a앞과 b뒤 비교
				string firstFrontStr = name[i].substr(0, k);
				string secondBackStr = name[j].substr(name[j].length() - firstFrontStr.length(), k);
				// a뒤와 b앞 비교
				string firstBackStr = name[i].substr(name[i].length() - k, k);
				string secondFrontStr = name[j].substr(0, k);
				if (firstFrontStr == secondBackStr || firstBackStr == secondFrontStr)
				{
					++retCnt;
					break;
				}
			}
		}
	}
	return retCnt;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	// 테스트케이스 n과 문자열이 n개 주어질 때, 연결 가능한 쌍의 개수를 출력
	// ex) 예제 입력 : mini, minhee, minimini, minigimbob , 예제 출력 : 3(mini + minimini, mini + minigimbob, minimini + minimini + minigimbob)
	int answer = 0;
	int n;
	vector<string> name;

	cin >> n;
	name.resize(n);
	for (auto& x : name) cin >> x;

	answer = checkSamePart(name);
	cout << answer << '\n';

	return 0;
}