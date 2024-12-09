#include <iostream>
#include<string>
#include <sstream>
#include <vector>
#include <unordered_set>

using namespace std;

// 테스트 케이스 벡터 생성
void makeStrVec(const int n, vector<string>& key)
{
	for (int i = 0; i < n; ++i)
	{
		string str;
		getline(cin, str);
		key.push_back(str);
	}
}

void makeShortcutKey(vector<string>& key)
{
	// unordered_set에 단축키 지정된 알파벳 insert
	unordered_set<char> shortcutKey;
	for (int i = 0; i < key.size(); ++i)
	{
		stringstream ss(key[i]);
		string word = "";
		vector<string> words;
		while (ss >> word)
			words.push_back(word);

		bool bSuccess = false;
		int pos = 0;
		// 전체 단어를 순회하며 첫번째 알파벳을 단축키 지정가능한지 확인 및 지정
		for (int j = 0; j < words.size(); ++j)
		{
			char firstAlpha = toupper(words[j][0]);
			auto it = shortcutKey.find(firstAlpha);
			if (it == shortcutKey.end())
			{
				shortcutKey.insert(firstAlpha);
				key[i].replace(pos , 1, "[" + string(1, words[j][0]) + "]");
				//words[j].replace(0, 1, "[" + string(1, words[j][0]) + "]");
				bSuccess = true;
				break;
			}
			else
				pos += words[j].length() + 1;
		}
		
		// 전체 단어를 순회하였을 때 첫번째 알파벳을 단축키 지정 불가능한 경우
		if (!bSuccess)
		{
			for (int j = 0; j < words.size(); ++j)
			{
				bool bChange = false;
				for (int k = 1; k < words[j].length(); ++k)
				{
					char nextAlpha = toupper(words[j][k]);
					auto it = shortcutKey.find(nextAlpha);
					if (it == shortcutKey.end())
					{
						shortcutKey.insert(nextAlpha);
						words[j].replace(k, 1, "[" + string(1, words[j][k]) + "]");
						bChange = true;
						break;
					}
				}
				if (bChange)
					break;
			}
			string strResult = "";
			for (int j = 0; j < words.size(); ++j)
				strResult += words[j] + " ";
			strResult.erase(strResult.end() - 1);
			key[i] = strResult;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	vector<string> key;

	cin >> n;
	cin.ignore();
	makeStrVec(n, key);

	makeShortcutKey(key);
	for (auto str : key)
		cout << str << '\n';

	return 0;
}