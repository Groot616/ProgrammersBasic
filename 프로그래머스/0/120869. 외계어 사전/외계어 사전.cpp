#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    
    // bool 타입 벡터 하나 생성하고 사이즈는 spell의 사이즈와 동일하게, 기본 false로 할당
    // 1. 루프를 통해 dic의 모든 원소에 접근
    // 2. 해당 원소의 알파벳중에 spell과 동일한게 있다면 각 idx true로 변경
    // bool 타입 벡터 전부 true일 경우 result = 1
    for(const auto& d : dic)
    {
        bool alpha = true;
        for(const auto& s : spell)
        {
            if(d.find(s) == string::npos)
            {
                alpha = false;
                break;
            }
        }
        
        if(alpha)
        {
            answer = 1;
            break;
        }
    }
    
    return answer;
}