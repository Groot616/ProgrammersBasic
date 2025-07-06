#include<string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<char> st;
    int idx = 0; 
    while(idx != s.length())
    {
        if(st.empty())
            st.push(s[idx]);
        else
        {
            if(s[idx] == ')')
            {
                if(st.top() == '(')
                    st.pop();
            }
            else
                st.push(s[idx]);
        }
            ++idx;
    }
    if(!st.empty())
        answer = false;

    return answer;
}