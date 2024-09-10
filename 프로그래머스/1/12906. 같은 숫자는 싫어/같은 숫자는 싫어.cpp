#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    stack<int> num;
    num.push(arr[0]);
    for(int i=1; i<arr.size(); ++i)
    {
        // cout << num.top() << ", " << arr[i] << endl;
        if(num.top() != arr[i])
            num.push(arr[i]);
    }
    
    
    int size = num.size();
    for(int i=0; i<size; ++i)
    {
        answer.push_back(num.top());
        num.pop();
    }
    reverse(answer.begin(), answer.end());

    return answer;
}