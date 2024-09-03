#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for(auto& e : arr)
    {
        if(e>=50 && e%2 == 0) e /=2;
        else if(e<50 && e%2 == 1) e *= 2;
    }
    
    answer = arr;
    
    return answer;
}