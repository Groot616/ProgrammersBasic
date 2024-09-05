#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    
    // 문자열을 읽음(시작시 모드는 0)
    // 1을 만나면 모드를 변경
    // 모드0 : idx가 짝수일때만 ret의 맨 뒤에 문자열 추가
    // 모드1 : idx가 홀수일때만 ret의 맨 뒤에 문자열 추가
    
    vector<char> result;
    int currentMode = 0;
    for(int i=0; i<code.length(); ++i)
    {
        if(currentMode == 0)
        {
            if(code[i] == '1')
                currentMode = 1;
            else if(code[i] == '0')
                currentMode = 0;
            else
            {
                if(i % 2 == 0)
                {
                    result.push_back(code[i]);
                    //++i;
                }
            }
        }
        else
        {
            if(currentMode == 1)
            {
                if(code[i] == '0')
                    currentMode = 1;
                else if(code[i] == '1')
                    currentMode = 0;
                else
                {
                    if(i % 2 == 1)
                        result.push_back(code[i]);
                }
            }
        }
    }
    for(const auto& e : result)
        answer += e;
    if(answer.empty())
        answer = "EMPTY";
    
    
    return answer;
}