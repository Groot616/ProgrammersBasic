#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer;
    
    if(s.length() > 6 || s.length() < 4 || s.length() == 5)
    {
        answer = false;
        return answer;
    }
    
    for(int i=0; i<s.length(); ++i)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            answer = false;
            return answer;
        }
    }
    answer = true;
    
    return answer;
}