#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0; i<s.length(); ++i)
    {
        int ascii = s[i];
        if(s[i] != ' ')
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                if(s[i] + n > 90)
                    s[i] = s[i] + n - 26;
                else
                    s[i] = s[i] + n;                 
            }
            else if(s[i] >= 97 && s[i] <= 122)
            {
                if(s[i] + n > 122)
                    s[i] = s[i] + n - 26;
                else
                    s[i] = s[i] + n;  
            }
        }
    }
    answer = s;
    
    return answer;
}