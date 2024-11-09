#include <string>
#include <vector>
#include <stack>

using namespace std;

string changeBin(int num)
{
    string binStr = "";
    stack<int> st;
    while(num != 0)
    {
        st.push(num % 2);
        num /= 2;
    }
    while(!st.empty())
    {
        binStr += to_string(st.top());
        st.pop();
    }
    return binStr;
}

int getOneCnt(string binStr)
{
    int retVal = 0;
    for(int i = 0; i < binStr.length(); ++i)
    {
        if(binStr[i] == '1')
            ++retVal;
    }
    return retVal;
}

int solution(int n) {
    int answer = 0;
    
    int nOneCnt = 0;
    string nStr = changeBin(n);
    nOneCnt = getOneCnt(nStr);
    
    while(true)
    {
        ++n;
        string nextNumStr = changeBin(n);
        if(nOneCnt == getOneCnt(nextNumStr))
            break;
        
    }
    answer = n;
    
    return answer;
}