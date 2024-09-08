#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int i = 0;
    vector<int> stk;
    while(i < arr.size())
    {
        if(stk.empty())
        {
            stk.push_back(arr[i++]);
        }
        else if(stk.back() == arr[i])
        {
            stk.pop_back();
            ++i;
        }
        else
        {
            stk.push_back(arr[i++]);
        }
    }
    if(stk.empty())
    {
        stk.push_back(-1);
        answer = stk;
    }
    else
        answer = stk;
    
    return answer;
}