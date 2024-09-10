#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    auto it = min_element(arr.begin(), arr.end());
    cout << *it << endl;
    
    if(arr.size() != 1)
    {
        arr.erase(it);
        answer = arr;
    }
    else
        answer.push_back(-1);
    
    return answer;
}