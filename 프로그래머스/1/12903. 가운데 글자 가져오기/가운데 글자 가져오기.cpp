#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int length = s.length();
    if(length % 2 == 0)
    {
        for(int i=length/2-1; i<= length/2; ++i)
            answer += s[i];
    }
    else
    {
        answer += s[length / 2];
    }
    
    return answer;
}