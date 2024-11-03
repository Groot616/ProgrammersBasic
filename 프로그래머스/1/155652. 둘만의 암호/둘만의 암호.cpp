#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    set<int> skipAlpha;
    for(const auto e : skip)
        skipAlpha.insert(e);
    
    for(int i = 0; i < s.length(); ++i)
    {
        vector<char> nextAlpha;
        for(int j = 1; j <= index; ++j)
        {
            if(s[i] + j > 122)
                nextAlpha.push_back(s[i] + j - 26);
            else
                nextAlpha.push_back(s[i] + j);
        }
        
        for(int j = 0; j < nextAlpha.size(); ++j)
        {
            auto it = skipAlpha.find(nextAlpha[j]);
            if(it != skipAlpha.end())
            {
                char tmp = nextAlpha[nextAlpha.size() - 1] + 1;
                if(nextAlpha[nextAlpha.size() - 1] + 1 > 122)
                    tmp -= 26;
                nextAlpha.push_back(tmp);
            }
        }
        s[i] = nextAlpha[nextAlpha.size() - 1];
    }
    answer = s;
    
    return answer;
}