#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    
    stack<int> st;
    int boxNum = 1;
    int start = 0;
    while(true)
    {   
        // 순서와 박스번호가 일치할 경우
        if(order[start] == boxNum)
        {
            ++answer;
            ++start;
            ++boxNum;
        }
        // 순서가 일치하지 않을 경우 + 스택의 top에 해당 박스가 있을 경우
        else if(!st.empty() && order[start] == st.top())
        {
            ++answer;
            ++start;
            st.pop();
        }
        // 순서가 일치하지 않을 경우 스택에 푸시
        else
        {
            st.push(boxNum);
            ++boxNum;
        }
        
        if(answer + st.size() == order.size())
            break;
    }
    
    while(true)
    {
        if(st.empty())
            break;
        
        if(order[start] == st.top())
        {
            ++answer;
            ++start;
            st.pop();
        }
        else
            break;
    }
    
    return answer;
}