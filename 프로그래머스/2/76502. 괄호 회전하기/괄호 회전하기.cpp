#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 0;

    for (int i = 0; i < s.length(); ++i)
    {
        stack<char> st;
        for (int j = 0; j < s.length(); ++j)
        {
            if (st.empty())
                st.push(s[j]);
            else
            {
                if (st.top() == '[' && s[j] == ']')
                    st.pop();
                else if (st.top() == '(' && s[j] == ')')
                    st.pop();
                else if (st.top() == '{' && s[j] == '}')
                    st.pop();
                else
                    st.push(s[j]);
            }
        }
        if (st.empty())
            ++answer;
        char tmp = s[0];
        for (int j = 1; j < s.length(); ++j)
            s[j - 1] = s[j];
        s[s.length() - 1] = tmp;
    }

    return answer;
}