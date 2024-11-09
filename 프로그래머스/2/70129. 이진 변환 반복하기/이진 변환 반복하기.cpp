#include <string>
#include <vector>
#include <stack>
#include <unordered_set>
#include <iostream>

using namespace std;

string changeBin(int num)
{
    string retStr = "";
    stack<int> st;
    
    while(num != 0)
    {
        st.push(num % 2);
        num /= 2;
    }
    
    while(!st.empty())
    {
        retStr += to_string(st.top());
        st.pop();
    }
    return retStr;
}

vector<int> solution(string s) {
    vector<int> answer;
    
    int cnt = 0;
    int deleted = 0;
    
    while(true)
    {
        int oneCnt = 0;
        for(int i = 0; i < s.length(); ++i)
        {
            if(s[i] == '1')
                ++oneCnt;
            else
                ++deleted;
        }
        
        if(s.length() == 1)
            break;
        else
        {
            s = changeBin(oneCnt);
            ++cnt;
        }
    }
    answer.push_back(cnt);
    answer.push_back(deleted);
    
    return answer;
}