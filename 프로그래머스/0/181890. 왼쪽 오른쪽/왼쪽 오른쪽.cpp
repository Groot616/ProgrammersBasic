#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    
    auto posL = find(str_list.begin(), str_list.end(), "l");
    auto posR = find(str_list.begin(), str_list.end(), "r");
    // l과 r 둘다 없으므로 빈 answer return
    if(posL == str_list.end() && posR == str_list.end())
        return answer;
    // l이 존재할 경우, l을 먼저 만날 경우
    else if(posL != str_list.end() && posL < posR)
    {
        for(auto it = str_list.begin(); it < posL; ++it)
        {
            answer.push_back(*it);
            cout << "it : " << *it << endl;
        }
    }
    // r이 존재할 경우, r을 먼저 만날 경우
    else if(posR != str_list.end() && posR < posL)
    {
        for(auto it = posR + 1; it != str_list.end(); ++it)
        {    
            answer.push_back(*it);
            cout << "it : " << *it << endl;
        }
        return answer;
    }  
    
    return answer;
}