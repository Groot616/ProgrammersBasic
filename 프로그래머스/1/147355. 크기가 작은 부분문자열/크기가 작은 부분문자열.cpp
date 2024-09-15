#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    unordered_map<string, int> strCnt;
    for(int i=0; i<t.length() - p.length()+1; ++i)
        strCnt[t.substr(i, p.length())]++;
    
    for(auto it = strCnt.begin(); it != strCnt.end(); ++it)
    {
        if(stoll(it->first) <= stoll(p))
            answer += it->second;
    }
    
    return answer;
}