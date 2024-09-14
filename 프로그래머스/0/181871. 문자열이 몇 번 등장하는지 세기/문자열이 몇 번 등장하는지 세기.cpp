#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;

    unordered_map<string, int> patCnt;
    for (int i = 0; i < myString.length() - pat.length() + 1; ++i)
        patCnt[myString.substr(i, pat.length())]++;

    for (auto it = patCnt.begin(); it != patCnt.end(); ++it)
    {
        if (it->first == pat)
            answer = it->second;
    }

    return answer;
}