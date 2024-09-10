#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    int length = s.length();
    if(length == 1)
        answer = s[0] - '0';
    else
    {
        if(s[0] == '+')
        {
            string tmp = "";
            for(int i=1; i<s.length(); ++i)
                tmp += s[i];
            answer = stoi(tmp);
        }
        else if(s[0] == '-')
        {
            string tmp = "";
            for(int i=1; i<s.length(); ++i)
                tmp += s[i];
            answer = -1 * stoi(tmp);
        }
        else
            answer = stoi(s);
    }
    
    return answer;
}