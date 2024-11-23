#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(), -1);
    
    stack<int> st;
    for(int i = numbers.size() - 1; i >= 0; --i)
    {
        while(!st.empty() && numbers[st.top()] <= numbers[i])
            st.pop();
        
        if(!st.empty())
            answer[i] = numbers[st.top()];
        st.push(i);
    }
    
    return answer;
}