#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<char> st;
    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] == '(')
            st.push('(');
        else
        {
            if(!st.empty())
            {
                if(st.top() == '(')
                        st.pop();
            }
            else
                st.push(')');
        }
    }
    if(!st.empty())
        answer = false;

    return answer;
}