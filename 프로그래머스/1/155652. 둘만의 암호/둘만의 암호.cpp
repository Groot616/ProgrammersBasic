#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    vector<char> alpha;
    for(int i = 0; i < 26; ++i)
        alpha.push_back(97 + i);
    
    for(int i = 0; i < skip.length(); ++i)
        alpha.erase(find(alpha.begin(), alpha.end(), skip[i]));
    
    for(int i = 0; i < s.length(); ++i)
    {
        int idx = -1;
        for(int j = 0; j < alpha.size(); ++j)
        {
            if(s[i] == alpha[j])
                idx = j;
        }
        
        if(idx + index >= alpha.size())
            answer += alpha[(idx + index) % alpha.size()];
        else
            answer += alpha[idx + index];
    }
        
    return answer;
}